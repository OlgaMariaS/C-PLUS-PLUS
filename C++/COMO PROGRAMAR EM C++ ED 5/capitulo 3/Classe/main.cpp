#include <iostream>

using namespace std;

//defini��o da classe
class Notas
{
//nome de fun��es s�o sempre iniciados em minusculo

    public://metodo de acesso PUBLICO, seguido de dois pontos sempre
    //metodo = fun��o
    void mostrarMsg ()/*Os par�nteses vazios na linha 12 indicam que a fun��o-membro mostrarMsg n�o requer dados adicionais para
realizar sua tarefa*/
 {
    cout << "Bem vindo ao Livro de Notas!" << endl;//mostra a msg
 }
};
int main()
{
    Notas minhasNotas; // cria um objeto Notas chamado minhasNotas
    minhasNotas.mostrarMsg(); // chama a fun��o mostarMsg do objeto
    return 0;
}
