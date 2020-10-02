//exercicio pg 96
#include <iostream>

using namespace std;

int main()
{
    //2.16 e 2.19
    int numero1;
    int numero2;
    int soma;
    int diferenca;
    int quociente;
    int produto;
    int media;

    cout << "Entre com valores inteiros" << endl;
    cin >> numero1 >> numero2;
    cout << numero1 << numero2<< endl;

    soma = numero1 + numero2;
    diferenca = numero1 - numero2;
    quociente = numero1 / numero2;
    produto = numero1 * numero2;

    cout << "A soma: \n" << soma << endl;
    cout << "a diferenca: \n" << diferenca << endl;
    cout << "O quociente: \n" << quociente << endl;
    cout << "O produto:\n" << produto << endl;


    //2.17
    int n1 = 1;
    int n2 = 2;
    int n3 = 3;
    int n4 = 4;

    cout << n1 <<"\n" << n2 << "\n" << n3 << "\n" << n4 << "\n" << endl;

    cout << n1 << "\n";
    cout << n2 << "\n";
    cout << n3 << "\n";
    cout << n4 << "\n";

    //2.18
    int number1;
    int number2;

    cout << "escreve um valor" << endl;
    cin >> number1;
    cout << "escreve um valor" << endl;
    cin >> number2;

    if (number1 > number2){
    cout << " Numero " << number1 << " e maior" << endl;
    }else {
    cout << " Numero " << number2 << " e maior" << endl;
    }

    if ( number1 == number2) {
        cout << " Os numeros sao iguais" << endl;
    }
    return 0;

}
