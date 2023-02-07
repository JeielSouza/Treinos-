import java.util.Locale;
import java.util.Scanner;

public class One
{
    public static void main(String[] args)
    {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double x = 0f;
        double y = 0f;
        double z = 0f; 
        double A,B,C = 0f; 

        System.out.println("DIGITE O NUMERO X: ");
        x = sc.nextDouble();
        System.out.println("DIGITE O NUMERO Y: ");
        y = sc.nextDouble();
        System.out.println("DIGITE O NUMERO Z: ");
        z = sc.nextDouble();

        System.out.printf("%n");

        // Raizes quadradas

        A = Math.sqrt(x);
        B = Math.sqrt(y);
        C = Math.sqrt(z);

        System.out.printf("RAIZ QUADRADADA DE X: %.2f %n", A);
        System.out.printf("RAIZ QUADRADA DE Y: %.2f %n", B);
        System.out.printf("RAIZ QUADRADA DE Z: %.2f %n", C);

        System.out.printf("%n");

        A = Math.pow(x, y);
        B = Math.pow(z, 2.0);
        C = Math.pow(3.0, y);

        System.out.printf("%.2f ELEVADO A %.2f = %.2f %n", x, y, A);
        System.out.printf("%.2f ELEVADO A 2.0 = %.2f %n", z, B);
        System.out.printf("3.0 ELEVADO A %.2f = %.2f %n", y, C);

        System.out.printf("%n");

        A = Math.abs(x);
        B = Math.abs(y);
        
        System.out.println("VALOR ABSOLUTO DE " + x + " = " + A);
        System.out.println("VALOR ABSOLUTO DE " + y + " = " + B);  // LEMBRADO QUE VALOR ABSOLUTO É O VALOR DO  NUMERO NÃO NEGATIVO! 


        sc.close();





    }
}

