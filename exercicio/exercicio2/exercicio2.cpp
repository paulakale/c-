#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale (LC_ALL, "pt-br");
    int precoProduto, precoSugerido;
    cout << "Quanto você pagou pelo produto? ";
    cin >> precoProduto;
    precoSugerido = precoProduto += (precoProduto/100)*20;
    cout << "O preço sugerido para venda é de: " << precoSugerido << "\n";
}