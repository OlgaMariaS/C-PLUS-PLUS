#include <iostream>

using namespace std;
    // Variavel Global � usada no programa todo

    int soma;
    int subtracao;
    double divisao;
    int multi;
    int resto;
int main()
{
    /*variavel local pertence a uma fun��o
     e n�o pode ser usada em outras partes */

    /* Operadores matem�ticos
    adi��o +  subtra��o -  divis�o /  multiplica��o *
    % (mod)resto da divis�o   () da prioridade
    */

    int numero1 = 10;
    int numero2 = 05;
    int numero3 = 02;
    int numero4 = 03;
    soma = numero1+numero2+numero3;
    subtracao = numero1-numero2-numero3;
    divisao = soma / subtracao;
    multi = ( 2 * subtracao) / 3;
    resto = numero1 % numero4;

    cout << "Soma dos valores: \n\n"<< soma<< "\n\n";
    cout << "Subtra��o dos valores: \n\n"<< subtracao<< "\n\n";
    cout << "Divisao dos valores: \n\n"<< divisao<< "\n\n";
    cout << "Multiplica��o dos valores: \n\n"<< multi<< "\n\n";
    cout << "resto dda divis�o: \n\n"<< resto<< "\n\n";
    return 0;
}
