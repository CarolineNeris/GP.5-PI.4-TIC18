#include <iostream>
#include <climits>  

using namespace std;

int main() {
    
    cout << "Menor valor para int: " << INT_MIN << endl;
    cout << "Maior valor para int: " << INT_MAX << endl;
    
    unsigned long int uli = ULONG_MAX;
    cout << "\nMenor valor para unsigned long int: 0" << endl;  
    cout << "Maior valor para unsigned long int: " << uli << endl;

    long int li;
    li = uli;  
    uli = li;  
    cout << "\nValor de li depois de receber o valor de uli: " << li << endl;
    cout << "Valor de uli depois de receber o valor de li: " << uli << endl;
   
    li = LONG_MAX;
    cout << "\nMenor valor para long int: " << LONG_MIN << endl;
    cout << "Maior valor para long int: " << li << endl;
    
    unsigned int ui;
    ui = li;  
    li = ui;  
    cout << "\nValor de li depois de receber o valor de ui: " << li << endl;
    cout << "Valor de ui depois de receber o valor de li: " << ui << endl;
    
    ui = UINT_MAX;
    cout << "\nMenor valor para unsigned int: 0" << endl;
    cout << "Maior valor para unsigned int: " << ui << endl;

    return 0;
}
