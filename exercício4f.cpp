#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double x = 0.1;
    long double y = 0.1;

    cout << "Valor de x (double): " << setprecision(20) << x << endl;
    cout << "Valor de y (long double): " << setprecision(20) << y << endl;

    return 0;
}

/*Neste exemplo, estamos atribuindo o valor 0.1 a uma variável double (x) e a uma variável long double (y) 
e, em seguida, imprimindo esses valores com uma precisão de 20 casas decimais. Você notará que o valor 
impresso para y (que é do tipo long double) tem uma precisão maior do que o valor impresso para x 
(que é do tipo double). Isso ocorre porque long double oferece uma precisão maior do que double.*/