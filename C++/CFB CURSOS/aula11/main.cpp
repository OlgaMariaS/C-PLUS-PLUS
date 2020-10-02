#include <iostream>
#include <cstdlib>

//Operador NOT (!), AND (&&) e OR (||)

using namespace std;

int main()
{
    inicio:
    system (cls);
    int numero;
    /*
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    2 a 4
    10 a 15
    18 a 20
    */

    cout << "Digite um valor até 20" << endl;
    cin >> numero;

    if (numero > 20){
        cout << "Necessario menor que 20\n";
        goto inicio;
    }else{
        if ((numero >=2 && numero <=4) || (numero >=10 && numero <=15)){

            cout << "O numero está correto: \n" << numero;
        }else {
            cout << "Numero errado" << numero;
        }
    }
    return 0;
}
