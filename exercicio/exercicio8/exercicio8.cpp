#include <iostream>
#include <locale>
using namespace std;
/*Escreva um algoritmo e seu equivalente em C++ que receba uma hora qualquer 
(sem os minutos e os zeros) e informe se é dia ou noite. 
Será dia se a hora estiver entre 6 e 18..*/
int main()
{
    setlocale (LC_ALL, "pt-br");
    int hour;
    cout << "Informe o horário: \n";
    cin >> hour;
    if (hour >=6 && hour <= 18) {    
        cout <<"Está de dia \n";
    } 
    else if (hour >0 && hour <=24) {
        cout <<"Está de noite \n";
    }
    else 
    {
        cout <<"O horário está inválido, por favor refaça. \n";
        main();
    }
}    