import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        // create an array of 8 integers from user input and find the position of the largest number

        Scanner scanner = new Scanner(System.in);
        int[] array = new int[8];
        for (int i = 0; i < array.length; i++) {
            System.out.println("Enter an integer: ");
            array[i] = scanner.nextInt();
        }

        

        int max = array[0];
        int maxIndex = 0;
        for (int i = 0; i < array.length; i++) {
            if (array[i] > max) {
                max = array[i];
                maxIndex = i;
            }
        }
        scanner.close();
        
        System.out.println("The largest number is " + max + " and it is in position " + maxIndex);
        

    }
}
