import java.util.Scanner;

/* 8. Fazer um algoritmo que dado três valores A, B e C verificar se eles formam um triângulo. 
Formando triângulo, dizer se é triângulo equilátero, isósceles ou escaleno. */

public class Ex8 {
    public static void main(String[] args) throws Exception {
        
        Scanner n = new Scanner(System.in);
            
        System.out.println("Digite o lado 1: ");
        int x = n.nextInt();
       
        System.out.println("Digite o lado 2: ");
        int y = n.nextInt();
        
        System.out.println("Digite o lado 3: ");
        int z = n.nextInt();
        
        if((x+y) > z && (y+z) > x && (x+z) > y){
            if(x == y && y == z)
                System.out.println("Os valores formam um triângulo equilátero! ");
            else if(x == y || y == z || z == x)
                System.out.println("Os valores formam um triângulo isósceles!");
            else
                System.out.println("Os valores formam um triângulo escaleno!");
        }
        else
            System.out.println("Os valores não formam um triângulo!");
        
        n.close();
        
        

    }
}
