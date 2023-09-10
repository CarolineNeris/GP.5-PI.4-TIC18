#include <iostream>
#include <iomanip>
using namespace std;
float pif = 3.14159265358979323846f; // Aproximação de Pi com várias casas decimais

int main() {

    // Com 2 casas decimais
    cout << "Com 2 casas decimais: " << fixed << setprecision(2) << pif << endl;

    // Com 4 casas decimais
    cout << "Com 4 casas decimais: " << fixed << setprecision(4) << pif << endl;

    // Com 8 casas decimais
    cout << "Com 8 casas decimais: " << fixed << setprecision(8) << pif << endl;

    // Com 16 casas decimais
    cout << "Com 16 casas decimais: " << fixed << setprecision(16) << pif << endl;

    return 0;
}
/* Para executar essa tarefa usamos o recurso stprecision da biblioteca iomanip,
ele serve para determinar o grau de precisão, ou seja, numero de casas decimais em nosso código
Enquanto  O fixed garante que os números sejam impressos com uma quantidade fixa de casas decimais, 
como especificado pela função setprecision.*/