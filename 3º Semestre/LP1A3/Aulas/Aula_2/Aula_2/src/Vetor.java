

import java.util.Random;

public class Vetor {
    private int[] valores;

    public Vetor(int qtd) //Construtor
    {
        valores = new int[qtd];
        Random num = new Random();

        for(int i = 0; i<qtd; i++)
            valores[i] = num.nextInt(100);
    }

    public String vetorGerado()
    {
        String vetorGerado = "";

        for (int x: valores)
            vetorGerado += x + " ";

        return vetorGerado;
    }

    public int somaVetor()
    {
        int soma = 0;

        for(int x: valores)
            soma += x;

        return soma;
    }

    public float mediaVetor()
    {
        
        return (float)this.somaVetor()/this.valores.length;

    }

    public int ultimoElemento()
    {
        return this.valores[this.valores.length-1]; 
    }

    public int maiorElemento()
    {
        int aux = 0;

        for(int i = 1; i < this.valores.length; i++)
        {
            if(this.valores[i] > aux)
               aux = valores[i];
        }

    return aux;
    }

    public boolean elementoProcurar(int x)
    {


        for(int i = 0; i < this.valores.length; i++){
            if (valores[i] == x)
                return true;
        }
        
        return false;
    }        


}
