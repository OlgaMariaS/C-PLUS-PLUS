#include <iostream>

using namespace std;

int main()
{
    int digito;
    int milhar; //criei o locais na memoria
    int centena;
    int dezena;

    int unidade;
    int restoM;
    int restoC;
    int restoD;

    cout << "Insira um numero com 4 digitos" << endl;
    cin >> digito;// pedi e armazenei os quatros digitos

    restoM = (digito % 1000);//pega se o resto da divisão do digito por 1000
    milhar = ( digito - restoM )/ 1000;//deixando ele um numero exato, e assim dividindo por 1000, que dara sua unidade

    restoC = (restoM % 100 );//pega se o resto da divisão (resto de milhar/100)
    centena = (restoM - restoC) / 100;// subtrati de o resto (digito/100), e divide por 100

    restoD = ( restoC % 10 );//o resto da centena / por 10 é igual ao resto da dezena
    dezena = (restoC - restoD) / 10;//subtrai do resto da centena e divide por 10

    unidade = restoD; //o resto da dezena é a unidade final

    cout << milhar  << endl;
    cout << centena << endl;
    cout << dezena << endl;
    cout << unidade << endl;

    return 0;
}
