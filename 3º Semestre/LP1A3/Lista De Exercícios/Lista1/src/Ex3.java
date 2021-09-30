import java.util.Scanner;

/* 3. Dados quatro números distintos digitados pelo usuário, 
desenvolver um algoritmo que determine e imprima a soma dos três números menores. */

public class Ex3 {
    public static void main(String[] args) throws Exception {
        
        Scanner n = new Scanner(System.in);
            
        int[] num = new int[4];
        int maior = 0, desc = 0, sum = 0;

        for(int i = 0; i < 4; i++){
            System.out.println("Digite o " + (i+1) +"º número inteiro: ");
            num[i] = n.nextInt();
        }
        
        for(int i = 0; i < 4; i++){
            if(num[i] >= maior){
                maior = num[i];
                desc = i;
            }
        }
        
        for(int i = 0; i < 4; i++){
            sum += num[i];
        }
        
        System.out.println("A soma dos três menores número é: " + (sum - num[desc]));
        n.close();
    }
}
