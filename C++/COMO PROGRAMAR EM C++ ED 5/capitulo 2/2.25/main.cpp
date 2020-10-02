//Programa pra ver se e impar ou par
#include <iostream>

using namespace std;

int main()
{
    int numero; //espaço na memória
    int numero2; //espaço na memória

    cout << "Insira um numero inteiro" << endl;
    cin >> numero;//msg pedindo para inserir / e armazena em numero
    cout << "Insira um numero inteiro" << endl;
    cin >> numero2;//msg pedindo para inserir / e armazena em numero

    if(numero % numero2 == 0){ //caso o resto da divisao do numero pelo outro for 0, ele é multiplo
        cout << numero << "O numero e multiplo de:" << numero2 << endl; //mostra a msg
    }else { //caso não seja par automaticamente ele nao e multiplo
       cout << numero << "O numero NAO e multiplo de:" << numero2 << endl; //mostra a msg
    }
    return 0;
}
