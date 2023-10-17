#include <iostream>
#include <iomanip>
#include <cfloat>

using namespace std;

int main() {
    // a.
    float minFloat = FLT_MIN;
    float maxFloat = FLT_MAX;

    cout << "Menor valor representável por um float: " << minFloat << endl;
    cout << "Maior valor representável por um float: " << maxFloat << endl;

    // b.
    float pif = 3.14159265358979323846f;
    cout << "Valor de pif (pi com 20 casas decimais): " << pif << endl;

    // c.
    for (int i = 2; i <= 16; i *= 2) {
        cout << "pif com " << i << " casas decimais: " << fixed << setprecision(i) << pif << endl;
    }

    // d.
    double pid = 3.14159265358979323846;
    cout << "Valor de pid (pi com 20 casas decimais): " << pid << endl;

    // e.
    for (int i = 2; i <= 16; i *= 2) {
        cout << "Diferença entre pif e pid com " << i << " casas decimais: " << pif - pid << endl;
    }

    // f.
    double d = 1.0;
    long double ld = 1.0l;

    cout << "Tamanho de double: " << sizeof(d) << " bytes" << endl;
    cout << "Tamanho de long double: " << sizeof(ld) << " bytes" << endl;

    return 0;
}
