#include <iostream>
#include <climits>

using namespace std;

int main() {
    
        unsigned int ui;
        long int li = 100;

        ui = li;
        
        
        cout << "O valor armazenado a ui eh : " << ui << endl;
        /*Retorna o mesmo valor que foi atribuido a variável li no inicio.*/

        li = ui;

        cout<< "O valor armazenado a li eh : " << li << endl;
        /*Retorna o valor de 100*/
        

    return 0;
}