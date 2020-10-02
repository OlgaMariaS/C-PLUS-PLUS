#include <iostream>
//Operador ternário
using namespace std;

int main()
{
    int nota1, nota2, media;

    string resultado;

    cout << "Adicione a primeira nota: ";
    cin >> nota1;
    cout << "Adicione a segunda nota: ";
    cin >> nota2;

    media = nota1 + nota2;

    //Se media >=60 : aprovado
    //se media < 60 : reprovado

// Caso a expressão:    Verdadeira       se não       Falso
//  media >= 60) ? resultado = "Aprovado" : resultado = "Reprovado";

    resultado =   (media >= 60) ? "Aprovado" : "Reprovado";

    cout << "O aluno esta: " << resultado;

    return 0;
}
