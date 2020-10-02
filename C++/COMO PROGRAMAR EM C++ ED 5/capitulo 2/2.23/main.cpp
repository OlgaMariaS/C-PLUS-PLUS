#include <iostream>

using namespace std;

int main()
{
   float maior;
   float menor;      //tres espaços na memória
   float numero;

        cout << "Digite um valor" << endl;
        cin >> numero;
        maior = numero;        //pedi uma primeira vez e já armazenei nas variaveis
        menor = numero;        //para elas já terem uma valro inicial

        for ( int i = 0; i < 4; i++ ) { //o programa vai rodar 5 vezes

        cout << "Digite um valor" << endl;
        cin >> numero;     //pede cinco vezes o numero e assim foi aramzenado em numero

        if (numero >= maior){ //o valor armazenado foi comparado ao seguinte numero,
                              //já que inicialmente ele em 0, o maior valor prevalecera
            maior = numero;
    }
        if (numero <= menor){ //o valor armazenado foi comparado ao seguinte numero,
                              //o menor valor prevalecera
            menor = numero;
    }
    }
        cout << "O maior numero e:" << maior << endl;
        cout << "Menor numero e:" << menor << endl;
   return 0;
}
