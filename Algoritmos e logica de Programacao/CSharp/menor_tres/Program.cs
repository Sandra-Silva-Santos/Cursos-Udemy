/* Menor de 3 numeros _ Exemplo da aula */

using System;
using System.Globalization;

namespace menor_tres {
	
	class Program {
		
		static void Main(String[] args) {
		CultureInfo CI = CultureInfo.InvariantCulture;
		
		int a, b, c, menor;
		
		Console.Write("Primeiro valor: ");
		a = int.Parse(Console.ReadLine());
		Console.Write("Segundo valor: ");
		b = int.Parse(Console.ReadLine());
		Console.Write("Terceiro valor: ");
		c = int.Parse(Console.ReadLine());
		
		if (a < b && a < c) {
			}		
			else if (b < c) {
			}
			else {
			menor = c;
			}		
			
			Console.WriteLine("MENOR = " + menor);
			
		}
		
	}
	
}


