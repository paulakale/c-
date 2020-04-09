#include <iostream>
#include <locale>
using namespace std;
int main()
//Receba um número qualquer e informe se ele é positivo ou negativo.
{
    setlocale (LC_ALL, "pt-br");
    float num;
    cout << "Informe seu número: \n";
    cin >> num;
    if (num>0)
    {
        cout << "Seu número é positivo \n";
    }
    else if (num<0)
    {
        cout << "Seu número é negativo \n";
    }
    else 
    {
        cout << "Seu número é neutro \n";
    }
}   