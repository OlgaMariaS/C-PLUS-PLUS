#include <iostream>
#include <cstdlib>

//Media de notas
//comando GOTO
using namespace std;

int main()
{
    inicio:
    int nota1, nota2, media;
    char opcao;

    system ("cls");//limpa a tela

    cout << "Nota1:" << endl;
    cin >> nota1;                       //pedi as notas ao usuario
    cout << "Nota2:" << endl;
    cin >> nota2;

    media = nota1 + nota2;//soma das notas

    if (media >= 60){

        cout << "APROVADO" << endl; //se a nota for maior que 60, aprovado
    }else if ( media >= 40 && media < 60) {
        cout << "recuperacao" << endl; //se a nota for menor que 60 e maior q 40, recuperação
    }
    else {
        cout << "reprovado" << endl;//se a nota for menor que 40,reprovado}
    }
//Goto não é bom, melhor com switch ou while
    cout << " Deseja adicionar mais notas [s/n]:";
    cin >> opcao;//dou a opção de inicar o programa, e armazeno

    if (opcao == 's' or opcao == 'S'){ //se SIM, retorna o programa do inicio
        goto inicio;
    }
    return 0;
}
