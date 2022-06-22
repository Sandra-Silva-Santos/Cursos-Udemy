/* Entrada de dados em C++ _ Exemplo da aula */

#include<bits/stdc++.h>


using namespace std;

int main()
{
    string nome1, nome2;
    char genero;
    int idade1,idade2;
    double salario1, salario2;

    cout << "Nome da primeira pessoa: ";
    getline(cin, nome1);
    cout << "Salaria da primeira pessoa: ";
    cin >> salario1;
    cout << "Digite uma idade: ";
    cin >> idade1;
    cout << "Digite um genero(F/M): ";
    cin >> genero;

    cout << "Nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Salaria da segunda pessoa: ";
    cin >> salario2;
    cout << "Digite uma idade: ";
    cin >> idade2;
    cout << "Digite um genero(F/M): ";
    cin >> genero;


    cout << fixed << setprecision(2);
    cout << "Nome 1: " << nome1 << endl;
    cout << "Salario 1: " << salario1 << endl;
    cout << "Idade: " << idade1 << endl;
    cout << "Sexo: " << genero << endl;
    cout << endl;
    cout << "Nome 2: " << nome2 << endl;
    cout << "Salario 2: " << salario2 << endl;
    cout << "Idade: " << idade2 << endl;
    cout << "Sexo: " << genero << endl;



    return 0;
}
