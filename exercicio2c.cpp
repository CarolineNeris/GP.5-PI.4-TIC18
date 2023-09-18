#include<iostream>
using namespace std;

int main(void){
   
    char caractere;
    int codigo;

    cout << "Digite um caractere: " << endl;
    cin >> caractere;
    codigo = (int) caractere;
    
    cout << "Caractere: " << caractere << " | Codigo: " << codigo << " | Hexadecimal: 0x" << hex << codigo << " | Octagonal: " << oct << codigo << endl;
    

    return 0;
}