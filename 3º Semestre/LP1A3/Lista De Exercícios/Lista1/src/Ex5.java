import java.util.Scanner;

/* 5 Faça um algoritmo que leia um número positivo e inteiro N, some todos os números inteiros de 1 a N, 
e mostre o resultado na tela. */

public class Ex5 {
    public static void main(String[] args) throws Exception {
        
        Scanner n = new Scanner(System.in);
            
        System.out.println("Digite um número inteiro: ");
        int num = n.nextInt();
        
        int sum = 0;
        for(int i = 0; i < num; i++){
            sum += (i+1);
        }

        System.out.println("A soma de todos os número de 1 a " + num + " é: " + sum);
        n.close();
    }
}
