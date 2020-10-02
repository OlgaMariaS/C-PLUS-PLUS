#include <iostream>

using namespace std;

int main()
{
    cout << "inteiro" << "quadrado" <<  "cubo" << endl;

    int i;

    for(i = 0; i <= 10; i++){

        int numero = i;
        int quadrado = i * i;
        int cubo = i * i * i;

        cout << numero << quadrado << cubo << endl;

    }
    return 0;
}
