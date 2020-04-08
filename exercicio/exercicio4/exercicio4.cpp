#include <iostream>
#include <locale>
using namespace std;
int main()
//Receba a quantidade de dias que uma pessoa já viveu e informe quantos anos ela tem.
//Desconsidere os anos bissextos. Informe se a pessoa já é maior de idade.
{
    setlocale (LC_ALL, "pt-br");
    int days, years;
    cout << "Quantos dias você já viveu? \n";
    cin >> days;
    years = days/365;
    if
    {
         (days/365 >=18)    
    cout << "Você é maior de idade. \n";
    }
    else
    {
       (days/365 < 18)
    }
     
    cout << "Você não é maior de idade! \n";
}
