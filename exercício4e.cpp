#include <iostream>
#include <iomanip>
using namespace std;

double pid = 3.14159265358979323846f; // Aproximação de Pi com várias casas decimais
float pif = 3.14159265358979323846f; // Aproximação de Pi com várias casas decimais

int main() {
    

    // Com 2 casas decimais
    cout << "Tipo Double com 2 casas decimais: " << fixed << setprecision(2) << pid << endl;
    cout << "Tipo float com 2 casas decimais: " << fixed << setprecision(2) << pif << endl;

    // Com 4 casas decimais
    cout << "Tipo Double com 4 casas decimais: " << fixed << setprecision(4) << pid << endl;
    cout << "Tipo float com 4 casas decimais: " << fixed << setprecision(4) << pif << endl;

    // Com 8 casas decimais
    cout << "Tipo Double com 8 casas decimais: " << fixed << setprecision(8) << pid << endl;
    cout << "Tipo float com 8 casas decimais: " << fixed << setprecision(8) << pif << endl;

    // Com 16 casas decimais
    cout << "Tipo Double com 16 casas decimais: " << fixed << setprecision(16) << pid << endl;
    cout << "Tipo float com 16 casas decimais: " << fixed << setprecision(16) << pif << endl;

    return 0;
}
/* aparentmente não tem diferença.*/