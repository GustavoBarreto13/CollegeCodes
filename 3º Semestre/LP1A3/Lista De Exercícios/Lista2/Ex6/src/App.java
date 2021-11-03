public class App {
    public static void main(String[] args) throws Exception {
        double [][] matriz = new double[][] { {35.6, 36.1, 35.5}, {36.4, 37.0, 35.7}, {38.6, 37.2, 36.1}, {38.0, 40.5, 37.0}, {36.0, 40.4, 39.2} };

        //find the max value and his position in the matrix and print it
        double max = matriz[0][0];
        int max_i = 0;
        int max_j = 0;
        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz[i].length; j++) {
                if (matriz[i][j] > max) {
                    max = matriz[i][j];
                    max_i = i+1;
                    max_j = j+1;
                }
            }
        }
        System.out.println("A temperatura máxima foi: " + max + ". No " + max_i + "º Dia" + " e na " + max_j + "º checagem.");
        
        //average of the third line of the matrix
        double sum = 0;
        for (int i = 0; i < matriz[2].length; i++) {
            sum += matriz[2][i];
        }
        System.out.println("A média do terceiro dia é: " + sum/matriz[2].length);
        
    }
}
