//Programa pra ver se e impar ou par
#include <iostream>

using namespace std;

int main()
{
    int numero; //espa�o na mem�ria

    cout << "Insira um numero inteiro" << endl;
    cin >> numero;//msg pedindo para inserir / e armazena em numero

    if(numero % 2 == 0){ //caso a divisao do numero por 2, o resto for 0, ele � par
        cout << "E um numero par!" << numero << endl; //mostra a msg
    }else { //caso n�o seja par automaticamente ele � impar
        cout <<"E um numero impar!" << numero << endl;//mostra a msg
    }

    return 0;
}
