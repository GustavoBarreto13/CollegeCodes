public class App {
    public static void main(String[] args) {
        

        int[] numbers = new int[10];
        for (int i = 0; i < numbers.length; i++) {
            System.out.println("Enter a number: ");
            numbers[i] = Integer.parseInt(System.console().readLine());
        }
    }
}
