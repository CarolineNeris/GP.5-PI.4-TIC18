#include<iostream>
using namespace std;

int main(void){
   
   char caractere;
   int codigo;

   for (caractere = '0'; caractere < '9'; caractere++)
   {
    codigo = (int) caractere;
    cout << "Caractere: " << caractere << " | Codigo: " << codigo << endl;
   }

    return 0;
}