import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        // get a 3x3 matrix from user input, and get the sum of all elements below the main diagonal 

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a 3x3 matrix: ");

        int[][] matrix = new int[3][3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        int sum = 0;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i > j) {
                    sum += matrix[i][j];
                }
            }
        }

        scanner.close();
        System.out.println("The sum of all elements below the main diagonal is: " + sum);


    }
}
