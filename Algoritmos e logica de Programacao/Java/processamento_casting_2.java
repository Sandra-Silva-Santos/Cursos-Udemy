
/* Processamento e Casting em Java */
/* Exemplo da aula */


import java.util.Locale;


public class processamento_casting_2 {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		int x;
		double y; 
		x = 5; 
		y = 2 * x; 
		System.out.println(x); 
		System.out.println(String.format("%.1f", y));
			
		
	}
		
}
