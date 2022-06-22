/* Tipo de dados em C++ _ Exemplo da aula */

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{

    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade = 20;
    salario = 1200.50;
    altura = 1.60;
    nome = "Jill Valentine";
    genero = 'F';

    cout << fixed << setprecision(2);
    cout << "Nome = " << nome << endl;
    cout << "Idade = " << idade << endl;
    cout << "Salario = " << salario << endl;
    cout << "Genero = " << genero << endl;
    cout << "Altura = " << altura << endl;


    return 0;


}
