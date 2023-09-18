#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    
       float pif = 3.1415926535897932384626433832795028841971;
       int precision = 40;
    

        cout << "Valor de pi com 40 casas decimais : " << fixed << setprecision(precision) << pif << endl;
        

         
    return 0;
}