#include <iostream>
#include <locale>
using namespace std;
/*Receba o valor de um salário e informe se ele é maior ou menor do que o salário mínimo. 
Considere o valor de 1000,00 como sendo o mínimo.*/
int main()
{
    setlocale (LC_ALL, "pt-br");
    float money;
    cout << "Informe o valor do salário: \n";
    cin >> money;
    if (money>= 1000) {   
        cout << "Esse salário é maior que o salário mínimo \n";
    }
    else if (money<=0)
    {
        cout << "Esse valor é inválido, por favor repita o processo \n";
        main();
    }
    else {
        cout << "Esse salário é menor que o salário mínimo \n";
    }
}    