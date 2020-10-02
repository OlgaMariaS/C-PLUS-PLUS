#include <iostream>

using namespace std;

//definição da classe
class Notas
{
//nome de funções são sempre iniciados em minusculo

    public://metodo de acesso PUBLICO, seguido de dois pontos sempre
    //metodo = função
    void mostrarMsg ()/*Os parênteses vazios na linha 12 indicam que a função-membro mostrarMsg não requer dados adicionais para
realizar sua tarefa*/
 {
    cout << "Bem vindo ao Livro de Notas!" << endl;//mostra a msg
 }
};
int main()
{
    Notas minhasNotas; // cria um objeto Notas chamado minhasNotas
    minhasNotas.mostrarMsg(); // chama a função mostarMsg do objeto
    return 0;
}
