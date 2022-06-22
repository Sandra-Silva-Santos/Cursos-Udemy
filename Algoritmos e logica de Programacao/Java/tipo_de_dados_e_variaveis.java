
/* variaveis e tipo de dados em Java */
/* Exemplo da aula */


	import java.util.Locale; 
	public class tipo_de_dados_e_variaveis {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		int idade;
		double salario, altura;
		char genero;
		String nome;
		
		idade = 30;
		salario = 1100.5;
		genero = 'F';
		nome = "Maria Jose";
		altura = 1.60;
		
		System.out.println("Idade = " + idade);
		System.out.println("Salario = " + String.format("%.2f", salario));
		System.out.println("Altura = " + String.format("%.2f", altura));
		System.out.println("Genero = " + genero);
	    System.out.println("Nome = " + nome); 
	    
	 } 
	
	}
	