//pg 96 exercicio 2.19
#include <iostream>

using namespace std;

int main()
{

    int n1;
    int n2;
    int n3;

    int soma;
    int media;
    int divisor = 3;
    int produto;

    cout << "Insira tres valores" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    cout << n1 ;
    cout << n2 ;
    cout << n3 << endl;

    soma = n1 + n2 + n3;
    cout << "Soma : " << soma << endl;

    media = (n1 + n2 + n3) / divisor;
    cout << "Media : " << media << endl;

    produto = n1 * n2 * n3;
    cout << "produto : " << produto << endl;

    if (n1 == n2 && n1 == n3 && n2 == n3 ){
        cout << "Sao iguais" << endl;
    }else {

       if ( n1 > n2 && n1 > n3){

        cout << "O maior " << n1 << endl;
    }
       if ( n2 > n1 && n2 > n3){

        cout << "O maior " << n2 << endl;
    }
       if ( n3 > n2 && n3 > n1){

        cout << "O maior " << n3 << endl;
    }
       if ( n1 < n2 && n1 < n3){

        cout << "O menor " << n1 << endl;
    }
       if ( n2 < n1 && n2 < n3){

        cout << "O menor " << n2 << endl;
    }
       if ( n3 < n2 && n3 < n1){

        cout << "O menor " << n3 << endl;
    }
    }
    return 0;
}
