#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale (LC_ALL, "pt-br");
    int num, numQuadrado;
    cout << "Digite um número: ";
    cin >> num;
    numQuadrado = num*num;
    cout << "O número ao quadrado é: " << numQuadrado<< "\n";
    if (numQuadrado >25) 
    cout << "O seu número é maior que 25." << "\n";
} 


    