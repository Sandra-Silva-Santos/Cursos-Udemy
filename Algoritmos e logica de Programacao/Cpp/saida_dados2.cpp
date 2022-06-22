/* Saida de dados em C++ _ Exemplo da aula */

#include<bits/stdc++.h>


using namespace std;

int main()
{
    double salario;
    int idade;
    char genero;
    string nome;

    idade = 132;
    salario = 9250.2;
    nome = "Kratos";
    genero = 'M';

    cout << fixed << setprecision(2);
    cout << "O funcionario " << nome << ", sexo "  << genero << " tem " << idade << " anos  e ganha  R$ " << salario << " reais ."  << endl;

    return 0;
}

