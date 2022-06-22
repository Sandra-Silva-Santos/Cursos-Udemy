/* Processamento e Casting em Java */
/* Exemplo 3 da aula */



import java.util.Locale;


public class processamento_casting_3 {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		double b1, b2, h, area;
		b1 = 6.0;
		b2 = 8.0;
		h = 5.0;
		area = (b1 + b2) / 2.0 * h;
				
		System.out.println(area);
		
	}
		
}
