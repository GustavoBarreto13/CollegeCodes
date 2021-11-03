
public class Principal {

	public static void main(String[] args) 
	{
		Cliente cliente = new Cliente();
		
		cliente.setIdCliente(100);
		cliente.setCpf("147.258.369-78");
		cliente.setEndereco("Alameda Pamplona, 258 - sala 56");
		cliente.setContato("Evandro", "2589-6985", "evandro@ifsp.edu.br");
		
		System.out.println(cliente.getIdCliente());
		System.out.println(cliente.getContato());
		System.out.println(cliente.getCpf());
		System.out.println(cliente.getEndereco());
		
		Fornecedor forne = new Fornecedor();
		
		forne.setIdFornecedor(200);
		System.out.println(forne.getIdFornecedor());
		
	}

}
