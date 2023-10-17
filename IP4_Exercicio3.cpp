#include <iostream>
#include <climits>

using namespace std;

int main() {
    // a.
    int menorInt = INT_MIN;
    int maiorInt = INT_MAX;
    cout << "Menor valor representado por int: " << menorInt << endl;
    cout << "Maior valor representado por int: " << maiorInt << endl;

    // b.
    unsigned long int uli = ULONG_MAX;
    cout << "Maior valor representado por unsigned long int: " << uli << endl;

    // c.
    long int li = uli;
    uli = li;
    cout << "Valor de li após a atribuição de uli: " << li << endl;
    cout << "Valor de uli após a atribuição de li: " << uli << endl;

    // d.
    li = LONG_MAX;
    cout << "Maior valor representado por long int: " << li << endl;

    // e.
    unsigned int ui = li;
    li = ui;
    cout << "Valor de ui após a atribuição de li: " << ui << endl;
    cout << "Valor de li após a atribuição de ui: " << li << endl;

    // f.
    unsigned int menorUInt = 0;
    unsigned int maiorUInt = UINT_MAX;
    cout << "Menor valor representado por unsigned int: " << menorUInt << endl;
    cout << "Maior valor representado por unsigned int: " << maiorUInt << endl;

    return 0;
}
