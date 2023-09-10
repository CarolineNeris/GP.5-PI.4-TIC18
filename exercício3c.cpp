#include <iostream>
using namespace std; 
int main() {
    long int li = -10; // Atribuindo um valor negativo a li
    unsigned long int uli = li; // Tentando atribuir o valor de li a uli

    cout << "Valor de li: " << li << endl;
    cout << "Valor de uli após atribuição de li: " << uli << endl;

    uli = 20; // Atribuindo um valor positivo a uli
    li = uli; // Tentando atribuir o valor de uli a li

    cout << "Valor de uli: " << uli << endl;
    cout << "Valor de li após atribuição de uli: " << li << endl;

    return 0;
}

/*conforme citamos no exercício anterior, unsigned em tradução livre é sem sinal ou não negativo
ao atribuir um valor negativo a ele dá um bug. Se no exemplo anterior trabalhar apena com valores 
positivos tá tudo bem*/ 