//Caixa Eletronico BASICO pg 84

//NAO VAI SER FEITO AGORA, POIS TEM METODOS MELHORES PRA FAZER, EXEMPLO SWITCH CASE

#include <iostream>

using namespace std;

int main()
{
    int conta;
    int saldo123;
    int saldo456;
    int saldo789;

    cout << "Seja Bem Vindo! Insira o numero de conta" << endl;
    cin >> conta;

    if (conta == 123 || conta == 456 || conta == 789) {
        int opcao;
        cout << "Qual operacao deseja realizar\n\n 1- Saldo em conta \n\n 2- Saque \n\n 3- deposito \n\n 4 - Sair" << endl;
        cin >> opcao;

        if (opcao == 1) {
            //recupera o saldo a partir do banco de dados
            if (conta == 123) {

                saldo123 = 100;
                cout << saldo123 << endl;
            }
            if (conta == 456) {

                saldo456 = 200;
                cout << saldo456 << endl;

            }
            if (conta == 789) {

                saldo789 = 500;
                cout << saldo789 << endl;
            }
        }
        if (opcao == 2) {

        int saque;
        cout << "Qual valor deseja sacar\n\n 1- R$ 20 \n\n 2- R$ 50 \n\n 3- R$ 100 \n\n 4 - Sair" << endl;
        cin >> saque;

            if (conta == 123) {

                if (saque <= saldo123){
                cout << "retirada de" << saque << endl;
                }else {
                 cout << "Saque invalido" << endl;
                }
            }
            if (conta == 456) {

                if (saque <= saldo456){
                cout << "retirada de" << saque << endl;
                }else{
                cout <<"Saque invalido" << endl;
                }
            }
            if (conta == 789) {
                if (saque <= saldo789){
                cout << "retirada de" << saque << endl;
                }else{
                cout <<"Saque invalido" << endl;
                }
            } }
        if (opcao == 3) {

        }
        if (opcao == 4) {

        }
    } else {
    cout << "Numero de Conta invalido" << endl;
    }

    return 0;
}
