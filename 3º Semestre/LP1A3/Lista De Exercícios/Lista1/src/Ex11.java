import java.util.Scanner;

/* 1. Tendo como dados de entrada a altura e o sexo de uma pessoa, 
    construa um algoritmo que calcule seu  peso ideal, utilizando as seguintes fórmulas:
    - Para Homens: (72.7 *h) – 58;
    - Para Mulheres: (62.1 * h) – 44.7 */

public class Ex11 {
    public static void main(String[] args) throws Exception {
        
        Scanner n = new Scanner(System.in);
        double pi = 0;
        
        System.out.println("Digite o Sexo (M ou F): ");
        String sexo = n.nextLine();

        System.out.println("Digite a altura em m: ");
        double num = n.nextDouble();

        if(sexo == "M")
            pi = ((72.7 * num) - 58.0);
        

        System.out.println("O peso ideal é: " + pi);
        n.close();
        
    }
}