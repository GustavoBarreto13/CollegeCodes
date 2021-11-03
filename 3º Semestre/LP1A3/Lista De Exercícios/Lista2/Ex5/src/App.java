import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        // create a array with 20 numbers input by the user and get the average and print all number that is small than the average
        Scanner scanner = new Scanner(System.in);
        int[] numbers = new int[20];
        int sum = 0;
        for (int i = 0; i < numbers.length; i++) {
            System.out.println("Enter a number: ");
            numbers[i] = scanner.nextInt();
            sum += numbers[i];
        }

        scanner.close();
        int average = sum / numbers.length;
        System.out.println("The average is: " + average);
        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] < average) {
                System.out.println(numbers[i]);
            }
        }
    }
}
