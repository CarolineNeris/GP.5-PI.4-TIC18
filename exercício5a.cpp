#include <iostream>
using namespace std;
int main(void) {
    int i = 2;
    float f = 0.0;
    double d = 0.0;
    char c = '\0';
    bool b = false;
    

    // Os valores são convertidos em booleanos
    bool result_i = i;
    bool result_f = f;
    bool result_d = d;
    bool result_c = c;
    bool result_b = b;
   

    cout << "Valor de int i: " << i << " => Convertido em booleano: " << result_i << endl;
    cout << "Valor de float f: " << f << " => Convertido em booleano: " << result_f << endl;
    cout << "Valor de double d: " << d << " => Convertido em booleano: " << result_d << endl;
    cout << "Valor de char c: " << c << " => Convertido em booleano: " << result_c << endl;
    cout << "Valor de bool b: " << b << " => Convertido em booleano: " << result_b << endl;
   

    return 0;
}
