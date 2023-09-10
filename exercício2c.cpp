#include <iostream>
using namespace std;
char n;

int main (void) {

    cout << "Escolha um número: ";
    cin >> n ;
        
    cout << "Valor  " << "Inteiro  " << "Octadecimal " << "Hexadecimal " << endl;
    cout << "Número escolhido:" << n <<endl;
    cout << "Inteiro:" << int(n) << endl;
    cout << "Octadecial:" << oct << int(n) << endl;
    cout << "Hexadecimal:" << hex << int(n) << endl;



    return 0;
}