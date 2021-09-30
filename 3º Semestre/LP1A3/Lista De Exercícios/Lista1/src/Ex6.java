import java.util.Scanner;

/* 6. Fazer um algoritmo que dado um número, calcular e escrever se este é positivo ou negativo, 
 e múltiplo ou não de 3, ao mesmo tempo. */

public class Ex6 {
    public static void main(String[] args) throws Exception {
        
        Scanner n = new Scanner(System.in);
            
        System.out.println("Digite um número inteiro: ");
        int num = n.nextInt();
        String pos;

        if(num >= 0)
            pos = "Positivo";
        else
            pos = "Negativo";

        if (num % 3 == 0){
            System.out.println("O número é " + pos + " e é multiplo de 3!");
        }
        else   
            System.out.println("O número é " + pos + " e NÃO é multiplo de 3!");       

        n.close();


    }
}
