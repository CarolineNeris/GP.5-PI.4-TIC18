#include <iostream>
#include <climits>

using namespace std;

int main() {
    
        long int li;
        unsigned long int uli;
        uli = ULLONG_MAX;
        li = uli;
        
        cout << "O valor armazenado a li eh : " << li << endl;
        // Retorna o valor -1

        uli = li;

        cout<< "O valor armazenado a uli eh : " << uli << endl;
        // Retorna o valor 4294967295

    return 0;
}
