import java.util.Scanner;

/* Desenvolver um algoritmo para pedir um mês (em número) e o programa deverá imprimir na tela o 
correspondente por extenso. Por exemplo: 03 – Março ou 09 - Setembro. */

public class Ex4 {
    public static void main(String[] args) throws Exception {
        
        Scanner n = new Scanner(System.in);
            
        System.out.println("Insira o número do mês: ");
        int mes = n.nextInt();
        
        switch (mes){
            case 1:
                System.out.println("01 - Janeiro");
                break;
            case 2:
                System.out.println("02 - Fevereiro");
                break;
            case 3:
                System.out.println("03 - Março");
                break;
            case 4:
                System.out.println("04 - Abril");
                break;
            case 5:
                System.out.println("05 - Maio");
                break;
            case 6:
                System.out.println("06 - Junho");
                break;
            case 7:
                System.out.println("07 - Julho");
                break;
            case 8:
                System.out.println("08 - Agosto");
                break;
            case 9:
                System.out.println("09 - Setembro");
                break;    
            case 10:
                System.out.println("10 - Outubro");
                break;
            case 11:
                System.out.println("11 - Novembro");
                break;
            case 12:
                System.out.println("12 - Dezembro");
                break;
        }

    n.close();
    }
}
