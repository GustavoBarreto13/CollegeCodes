

public class Aula2 {
    public static void main(String[] args) {
        Vetor v = new Vetor(15);

        System.out.println("Vetor Gerado: " + v.vetorGerado());

        System.out.println("Vetor Somado: " + v.somaVetor());

        System.out.println("Média do Vetor " + v.mediaVetor());

        System.out.println("Último Elemento " + v.ultimoElemento());

        System.out.println("Maior Elemento " + v.maiorElemento());

        System.out.println("Procurar Elemento " + v.elementoProcurar(10));
    }
}