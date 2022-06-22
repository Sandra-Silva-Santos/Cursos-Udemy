/* Média de idade _ Exemplo da aula */

using System;
using System.Globalization;

namespace media_idade {
	
	class Program {
		
		static void Main (String[] args) {
		
		CultureInfo CI = CultureInfo.InvariantCulture;
		
		string nome1, nome2;
		int idade1, idade2;
		double media;
		
		Console.WriteLine("Dados da primeira pessoa : ");
		Console.Write("Nome; ");
		nome1 = Console.ReadLine(); 
		Console.Write("Idade: ");
		idade1 = int.Parse(Console.ReadLine());
		
		Console.WriteLine("Dados da segunda pessoa : ");
		Console.Write("Nome; ");
		nome2 = Console.ReadLine(); 
		Console.Write("Idade: ");
		idade2 = int.Parse(Console.ReadLine());
		
		media = (idade1 + idade2) / 2.0;
		
		Console.WriteLine("A idede media de " + nome1 + "e" + nome2 + "e de " + media.ToString("F1", CI) + "anos");
			
		}
		
	}
	
}


