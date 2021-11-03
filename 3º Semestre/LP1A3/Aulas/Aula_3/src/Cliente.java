
public class Cliente {
	private int idCliente;
	private String cpf;
	private String endereco;
	private Contato contato;	// objeto
	
	public Cliente()
	{
		contato = new Contato();
	}
	//////////////////////////////////////////////////////////
	public int getIdCliente() {
		return idCliente;
	}
	public String getCpf() {
		return cpf;
	}
	public String getEndereco() {
		return endereco;
	}
	public String getContato()
	{
		return contato.getNome() + " - " + contato.getTelefone() + " - " + contato.getEmail();
	}
	
	///////////////////////////////////////////////////////////
	public void setIdCliente(int idCliente) {
		this.idCliente = idCliente;
	}
	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}
	
	public void setContato(String nome, String telefone, String email)
	{
		contato.setNome(nome);
		contato.setTelefone(telefone);
		contato.setEmail(email);
	}
	

}
