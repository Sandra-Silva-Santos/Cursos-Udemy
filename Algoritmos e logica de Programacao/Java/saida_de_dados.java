/* Saidad de dados em Java */
/* Exemplo da aula */


import java.util.Locale;

public class saida_de_dados {

	public static void main(String[] args) {
	    				
		Locale.setDefault(Locale.US);
		
		int idade;
		double salario;
		String nome;
		char genero;
		
		idade = 32;
		salario = 1100.5;
		nome = "Maria Jose";
		genero = 'F';
		
		System.out.println("A funcionaria " + nome + ", Sexo " + genero + ", ganha " + 	String.format("%.2f", salario) +
				" e tem " + idade + " anos.");
		
	}

}
