import javax.swing.JOptionPane;

public class App {
    public static void main(String[] args) {
        //definição e Instanciamento do Objeto
        
        int numero1, numero2;

        numero1 = Integer.parseInt(JOptionPane.showInputDialog("Digite numero 1:"));
        numero2 = Integer.parseInt(JOptionPane.showInputDialog("Digite numero 2:"));
        
        Operacoes op1 = new Operacoes(numero1, numero2); 

        JOptionPane.showMessageDialog(null, "Soma: " + op1.soma());
        JOptionPane.showMessageDialog(null, "Multiplicacao: " + op1.multiplicacao());
        JOptionPane.showMessageDialog(null, "Divisao: " + op1.divisao());
        JOptionPane.showMessageDialog(null, "Subtracao: " + op1.subtracao());

    }
}

