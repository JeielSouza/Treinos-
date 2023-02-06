public class One
{
    public static void main(String[] args)
    {
        String produto = "Computador";
        String produto2 = "Mesa Escritorio";
        int age = 30;
        int cod = 5290; 
        char sex = 'F'; 

        double size = 53.234567;
        double price = 2100.00;
        double price2 = 650.50;
        
        System.out.printf("PRODUTOS: %n");
        System.out.printf("1 - %s %n PRECO $ %.2f %n", produto, price);
        System.out.printf("2 - %s %n PRECO $ %.2f %n", produto2, price2);
        
        
        System.out.printf("%n");

        System.out.println("CLIENTE: ");
        System.out.println("IDADE: " + age);
        System.out.println("COD: " + cod);
        System.out.println("GENERO: " + sex);

        System.out.printf("%n");

        System.out.printf("TAMANHO DA MESA COM OITO DECIMAIS: %.8f %n COM TRES DECIMAIS: %.3f", size, size);



    }
}