#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    
       float pif = 3.1415926535897932384626433832795028841971;
       double pid = 3.1415926535897932384626433832795028841971;
    

        cout << "Valor de pi com 2 casas decimais (float) : " << fixed << setprecision(2) << pif << endl;
        cout << "Valor de pi com 4 casas decimais (float) : " << fixed << setprecision(4) << pif << endl;
        cout << "Valor de pi com 8 casas decimais (float) : " << fixed << setprecision(8) << pif << endl;
        cout << "Valor de pi com 16 casas decimais (float) : " << fixed << setprecision(16) << pif << endl;

        cout << "Valor de pi com 2 casas decimais (double) : " << fixed << setprecision(2) << pid << endl;
        cout << "Valor de pi com 4 casas decimais (double) : " << fixed << setprecision(4) << pid << endl;
        cout << "Valor de pi com 8 casas decimais (double) : " << fixed << setprecision(8) << pid << endl;
        cout << "Valor de pi com 16 casas decimais (double) : " << fixed << setprecision(16) << pid << endl;
        

         
    return 0;
}