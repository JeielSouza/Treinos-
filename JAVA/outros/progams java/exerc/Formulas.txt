package test; 
import java.util.Locale; 
import java.util.Scanner; 

public class One 
{
	public static void main(String[] args)
	{
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		double a; 
		double b;
		double c;

		double triangulo; 
		double circulo; 
		double trapezio;
		double quadrado;
		double retangulo; 

		double Pi = 3.14159;

		System.out.println("DIGITE A: ");
		a = sc.nextDouble();
		System.out.println("DIGITE B: ");
		b = sc.nextDouble();
		System.out.println("DIGITE C: ");
		c = sc.nextDouble();

		triangulo = (a*c) / 2; 
		circulo = Pi * Math.pow(c,2);
		trapezio = ((a + b) * c) / 2;
		quadrado = Math.pow(b, 2);
		retangulo = a * b; 
		
		System.out.printf("%n");

		System.out.printf("TRIANGULO: %.3f %n", triangulo);
		System.out.printf("TRIANGULO: %.3f %n", circulo);
		System.out.printf("TRIANGULO: %.3f %n", trapezio);
		System.out.printf("TRIANGULO: %.3f %n ", quadrado);
		System.out.printf("TRIANGULO: %.3f", retangulo);





		sc.close();
	}
}