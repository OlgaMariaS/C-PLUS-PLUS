#include <iostream>

using namespace std;

int main()
{
    int numero1;
    int numero2;

    cout << "Diga os valores de dois numeros" << endl;
    cin >> numero1 >> numero2 ;

    if (numero1 == numero2) {
         cout << numero1 << " e igual " << numero2 << endl;
    }
    if (numero1 != numero2) {
     cout << numero1 << " e diferente " << numero2 << endl;
    }
    if (numero1 > numero2) {
         cout << numero1 << " e maior " << numero2 << endl;
    } else {
         cout << numero1 << " e menor " << numero2 << endl;
    }
    if (numero2 > numero1) {
         cout << numero2 << " e maior " << numero1 << endl;
    }else{
         cout << numero2 << " e menor " << numero1 << endl;
    }
    return 0;
}
