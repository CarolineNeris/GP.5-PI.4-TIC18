#include <iostream>
#include <iomanip>  
#include <cfloat>   

using namespace std;

int main() {
    
    cout << "Menor valor para float: " << FLT_MIN << endl;
    cout << "Maior valor para float: " << FLT_MAX << endl;

    float pif = 3.14159265358979323846f;  
    cout << "\nValor de PI (float): " << pif << endl;

    cout << fixed << setprecision(2) << "PI com 2 casas decimais: " << pif << endl;
    cout << fixed << setprecision(4) << "PI com 4 casas decimais: " << pif << endl;
    cout << fixed << setprecision(8) << "PI com 8 casas decimais: " << pif << endl;
    cout << fixed << setprecision(16) << "PI com 16 casas decimais: " << pif << endl;

    double pid = 3.14159265358979323846; 
    cout << "\nValor de PI (double): " << pid << endl;

    cout << "\nComparação entre pif e pid:" << endl;
    cout << fixed << setprecision(2) << "Com 2 casas: " << "pif: " << pif << ", pid: " << pid << endl;
    cout << fixed << setprecision(4) << "Com 4 casas: " << "pif: " << pif << ", pid: " << pid << endl;
    cout << fixed << setprecision(8) << "Com 8 casas: " << "pif: " << pif << ", pid: " << pid << endl;
    cout << fixed << setprecision(16) << "Com 16 casas: " << "pif: " << pif << ", pid: " << pid << endl;

    long double pild = 3.14159265358979323846L;  
    cout << "\nValor de PI (long double): " << pild << endl;
    if (sizeof(double) == sizeof(long double)) {
        cout << "Nesse sistema, double e long double possuem o mesmo tamanho." << endl;
    } else {
        cout << "Nesse sistema, double e long double possuem tamanhos diferentes." << endl;
    }

    return 0;
}
