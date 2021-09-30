import java.util.Scanner;

public class Ex2 {
    public static void main(String[] args) throws Exception {
        
        Scanner n = new Scanner(System.in);
            
        System.out.println("Digite um número inteiro: ");
        int num = n.nextInt();
    
        if ((num % 3 ) == 0){
            if ((num % 5) == 0){
                System.out.println("O número é divisível por 3 e 5.");
            }
        }
        else
            System.out.println("O número NÃO é divisível por 3 e 5");
        n.close();
    }
}
