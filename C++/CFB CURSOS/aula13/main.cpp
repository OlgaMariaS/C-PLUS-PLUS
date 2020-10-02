#include <iostream>

using namespace std;

int main()
{
    int cor;

    cout << "Escolha um cor: " << endl;
    cout << "\n 1-verde \n 2-vermelho \n 3-azul" << endl;
    cin >> cor;

    switch (cor){
        case 1:
            cout << "cor escolhida e: verde "  << endl;
        break;
        case 2:
            cout << "cor escolhida e: vermelho " << endl;
        break;
        case 3:
            cout << "cor escolhida e: azul " << endl;
        break;
        default:
            cout << " Invalido " << endl;
    } /*
    switch (cor){
        case 1:
        case 2:
        case 3:
            cout << "cor escolhida e: azul " << endl;
        break;
        case 4:
        case 5:
        case 6:
            cout << "cor escolhida e: branco " << endl;
        break;
        default:
            cout << "Invalido" << endl;
    }
    */

    return 0;
}
