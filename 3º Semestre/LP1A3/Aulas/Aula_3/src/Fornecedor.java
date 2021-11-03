
public class Fornecedor 
{
	private int idFornecedor;
	private String cnpj;
	private String razaoSocial;
	private Contato contato;	// objeto
	
	public Fornecedor()
	{
		contato = new Contato();
	}

	//////////////////////////////////////////////////////////////
	public int getIdFornecedor() {
		return idFornecedor;
	}

	public String getCnpj() {
		return cnpj;
	}

	public String getRazaoSocial() {
		return razaoSocial;
	}

	public String getContato()
	{
		return contato.getNome() + " - " + contato.getTelefone() + " - " + contato.getEmail();
	}

	////////////////////////////////////////////////////////////
	public void setIdFornecedor(int idFornecedor) {
		this.idFornecedor = idFornecedor;
	}

	public void setCnpj(String cnpj) {
		this.cnpj = cnpj;
	}

	public void setRazaoSocial(String razaoSocial) {
		this.razaoSocial = razaoSocial;
	}

	public void setContato(String nome, String telefone, String email)
	{
		contato.setNome(nome);
		contato.setTelefone(telefone);
		contato.setEmail(email);
	}
	
	
	
}
