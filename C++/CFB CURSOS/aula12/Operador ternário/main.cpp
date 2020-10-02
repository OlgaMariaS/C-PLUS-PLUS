#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Digite um valor: ";
    cin >> x;
    cout << "Digite outro valor: ";
    cin >> y;

    if ( x == y){
        cout << "Os números são iguais" << endl;
    }

    (y > x ) ? x++ : x--;

    cout << "Novo valor de x:  "<< x << endl;

    return 0;
}
