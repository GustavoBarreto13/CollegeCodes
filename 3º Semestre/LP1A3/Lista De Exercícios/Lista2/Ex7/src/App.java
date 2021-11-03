import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        // read input from user matrix 4x4 and count the number of elements less than 10
        
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter 4x4 matrix: ");
        int[][] matrix = new int[4][4];
        int count = 0;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matrix[i][j] = scanner.nextInt();
                if (matrix[i][j] < 10) {
                    count++;
                }
            }
        }

        scanner.close();
        System.out.println("Number of elements less than 10: " + count);     
        
        
   }
}