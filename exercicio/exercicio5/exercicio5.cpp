#include <iostream>
#include <locale>
using namespace std;
int main()
//Receba um número qualquer e informe se ele é par ou ímpar.
{
    setlocale (LC_ALL, "pt-br");
    int num, par;
    cout << "Digite um número: ";
    cin >> num;
    par = (num%2 == 0);
    if (par)
    {
        cout << "Seu número é par! \n";
    }
    else 
    {
        cout << "Seu número é ímpar. \n";
    }
}