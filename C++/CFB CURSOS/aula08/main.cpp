#include <iostream>

//invertendo valores das variaveis

using namespace std;

int main()
{
    int valor;

    cout <<"Insira uma valor" << endl;
    cin >> valor;

    /*Podemos tbm escrever momentaneamente o contrario
    cout << - valor << endl;*/

    valor = valor * (-1);//multiplica por -1 e qualquer numero torna se o contrario
//  valor =- valor;
    cout << "Valor contrario \n" << valor << endl;

    return 0;
}
