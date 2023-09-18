#include <iostream>
#include <limits>

using namespace std;

int main() {
    int menor_valor = numeric_limits<int>::min();
    int maior_valor = numeric_limits<int>::max();

    cout << "Menor valor representavel por um int: " << menor_valor << endl;
    cout << "Maior valor representavel por um int: " << maior_valor << endl;

    return 0;
}
