//Classe
public class Operacoes
{
	// atributos
	private int operador1;
	private int operador2;
	
    //método construtor
    public Operacoes(int n1, int n2){
        this.operador1 = n1;
        this.operador2 = n2;
    }

	// métodos
	public int soma()
	{
		return this.operador1 + this.operador2;
	}
	public int multiplicacao()
	{
		return this.operador1 * this.operador2;
	}
	public float divisao()
	{
		return (float)this.operador1 / this.operador2;
	}
    public int subtracao()
	{
		return this.operador1 - this.operador2;
	}
}