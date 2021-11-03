public class App {
    public static void main(String[] args) throws Exception {
        // create an array of 5 integers input by the user and copy the array to a new array
        int[] vet1 = new int[5];
        System.out.println("Enter 5 integers: ");
        for (int i = 0; i < vet1.length; i++) {
            vet1[i] = Integer.parseInt(System.console().readLine());
        }
        int[] vet2 = new int[vet1.length];
        System.arraycopy(vet1, 0, vet2, 0, vet1.length);
    
        // print the first array
        System.out.println("The first array is: ");
        for (int i = 0; i < vet1.length; i++) {
            System.out.print(vet1[i] + " ");
        }

        //print the second array in reverse order
        System.out.println("\nThe second array is: ");
        for (int i = vet2.length - 1; i >= 0; i--) {
            System.out.print(vet2[i] + " ");
        }
        
        
    }
}