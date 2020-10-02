//Olga, mar/2020; 16 hr; OBJ: Aprender algoritmo c++
#include <iostream>
// # instrui a ser processada pelo pré-processador
using namespace std;
// ";" indica o termino de uma instrução
int main(){

    int numero = 0; //recebe numeros inteiros.2,8,-4
    char letra = 'a';/* ATEÇÃO, O VALOR DA VARIAVEL É DENTRO SOMENTE DE APAS SIMPLES
                     recebe uma caracter e para receber mais de um caracter: char letra [20]*/
    string palavras = "Olga Maria"; //recebe textos
    double reais = 3.1415; //recebe com precisão n° reais
    float real = 3.14; // recebe n° reais com menor precisão
    bool decisao =false; //verdadeiro ou falso

    //mostrar uma msg e armazenar o valor de resposta
    cout << "Digite um numero: \n " ;  // "\n\n" da uma linha inteira em branco
    cin >> numero;

    cout << "Digite a primeira letra do seu nome : \n " ;
    cin >> letra;

    cout << "Digite seu nome: \n" ;
    cin >> palavras;

    cout << "Digite o valor do dinheiro: \n ";
    cin >> reais;


    //exemplo mostrando na tela
    cout << numero << "\n" ;
    cout << letra << "\n";
    cout << palavras << "\n";
    cout << reais << "\n";
    cout << real << "\n";
    cout << decisao << "\n";

    return 0;
}
