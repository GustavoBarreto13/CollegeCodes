import java.util.Scanner;

/* 10.  Escrever um programa que leia uma sequencia numérica de valores inteiros 
    e positivos. O programa deverá somar todos os números digitados pelo usuário e 
    apresentar o resultado na tela. A leitura dos dados deverá parar quando 
    o usuário digitar um valor negativo. */

public class Ex10 {
    public static void main(String[] args) throws Exception {
        
        Scanner n = new Scanner(System.in);
        
        int sum = 0, num = 0;

        while(num >= 0){
            
            sum += num; 

            System.out.println("Digite um número: ");
            num = n.nextInt();
        }

        System.out.println("A soma dos números é: " + sum);

        n.close();
        
    }
}