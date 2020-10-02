// pg 93 2.4 e 2.5

//calculo de tres inteiros
#include <iostream>
//permite o programa fazer entradas e saidas
using namespace std;
// parte de biblioteca que adicona os comandos

// inicia a execução do programa
int main()
{
    int x; //criei variavel de tipo inteiro
    int y; //criei variavel de tipo inteiro
    int z; //criei variavel de tipo inteiro

    cout << "Insira um numero inteiro"<< endl;
    cin >> x;
    //pedi ao usuario para adicionar um numero
    cout << "Insira um numero inteiro"<< endl;
    cin >> y;
    //pedi ao usuario para adicionar um numero
    cout << "Insira um numero inteiro"<< endl;
    cin >> z;
    //pedi ao usuario para adicionar um numero

    int soma = x + y + z; // somei os valores inseridos e atribui a variavel soma

    cout << "soma dos valores e: \n" << soma << endl;
    // mostrei o resultado dos valores

    return 0; //programa terminou sem erros
}
// fim da execução
