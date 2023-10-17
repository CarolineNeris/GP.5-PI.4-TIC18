#include <iostream>

int main() {
    int numero = 42;
    double decimal = 3.14;
    char caractere = 'A';
    bool valorBooleano;

    using namespace std;


    valorBooleano = numero;
    cout << "numero: " << valorBooleano << endl;

    valorBooleano = decimal;
    cout << "decimal: " << valorBooleano << endl;

    valorBooleano = caractere;
    cout << "caractere: " << valorBooleano << endl;

    valorBooleano = 0;
    cout << "0: " << valorBooleano << endl;

    valorBooleano = 0.0;
    cout << "0.0: " << valorBooleano << endl;

    valorBooleano = '\0';
    cout << "caractere nulo: " << valorBooleano << endl;

    return 0;
}
