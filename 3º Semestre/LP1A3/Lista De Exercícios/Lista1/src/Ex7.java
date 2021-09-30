import java.util.Scanner;

/* 7. Elabore um algoritmo que calcule o valor do fatorial de um número
   informado pelo usuário. Lembrando  que 0! = 1. */

public class Ex7 {
    public static void main(String[] args) throws Exception {
        
        Scanner n = new Scanner(System.in);
            
        System.out.println("Digite um número inteiro: ");
        int num = n.nextInt();
        int fat = 1;

        for(int i = 1; i <= num; i++){
            fat *= i; 
        }

        System.out.println( "O fatorial de " + num + " é " + fat );
        
        n.close();


    }
}
