#include <iostream>
#include <limits>
using namespace std;

int main() {
    unsigned long int uli_max = numeric_limits<unsigned long int>::max();
    unsigned long int uli_min = numeric_limits<unsigned long int>::min();

    cout << "Maior valor representável por um unsigned long int: " << uli_max << endl;
    cout << "Menor valor representável por um unsigned long int: " << uli_min << endl;
    return 0;
}

// unsigned long int - tradução livre inteiro longo sem sinal, ou seja não negativo.
//por isso que não tem representação negativa no resultado, quando aplicado o valor mínimo ele retorna zero