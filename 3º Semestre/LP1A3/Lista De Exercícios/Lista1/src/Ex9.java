import java.util.Scanner;

/* 9. Implementar um algoritmo capaz de encontrar o maior dentre 3 números quaisquer. 
    Suponha todos serem distintos. */

public class Ex9 {
    public static void main(String[] args) throws Exception {
        
        Scanner n = new Scanner(System.in);
        
        int[] num = new int[3];
        
        for(int i = 0; i < 3; i++){
            System.out.println("Digite o " + (i+1) +"º número inteiro: ");
            num[i] = n.nextInt();
        }

        int maior = num[0];
        for(int i = 0; i < 3; i++){
            if(num[i] > maior){
                maior = num[i];
                
            }
        }

        System.out.println("O maior número é: " + maior);

        n.close();
        
    }
}