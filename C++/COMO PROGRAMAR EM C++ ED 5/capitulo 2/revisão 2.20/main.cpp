#include <iostream>

using namespace std;

int main()
{
    double raio;
    double perimetro = 3.1415;
    double circunferencia;
    double diametro;
    double area;

    cout << "Insira o valor do raio do sua circunferencia" << endl;
    cin >> raio;

    diametro = raio * 2;
    cout << "Diametro:" << diametro << endl;

    area = perimetro * (raio * raio);
    cout << "Area:" << area << endl;

    circunferencia = 2 * (perimetro * raio);
    cout << "Circunferencia:" << circunferencia << endl;
    return 0;
}
