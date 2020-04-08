#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale (LC_ALL, "pt-br");
    int numeroUm, numeroDois, resultadoUm, resultadoDois;
    cout << "Digite o primeiro número: ";
    cin >> numeroUm;
    cout << "Digite o segundo número: ";
    cin >> numeroDois;   
    resultadoUm= numeroUm*numeroUm; 
    resultadoDois= numeroDois*numeroDois*numeroDois;
    cout << "O resultado do número ao quadrado é: "<< resultadoUm << " e ao cubo é: " << resultadoDois << "\n";
    

}