#include <iostream>
#include <iomanip>
using namespace std;
double pid = 3.14159265358979323846; // Valor aproximado de Pi com várias casas decimais

int main() {
   
    cout << "Valor aproximado de Pi: " << fixed << pid << endl;

    return 0;
}

/* double entrega a mesma quantidade de casas decimais fornecida por float, não entendi*/