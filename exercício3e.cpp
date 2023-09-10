#include <iostream>
using namespace std;
int main() {
    unsigned int ui = 100; 
    long int li = ui; /* aqui pegamos um valor interio não negativo e atribuimos a um inteiro com sinal,
    ou seja, nessa nova atribuição dá par ser negativo. Até aqui tudo bem visto que ele tem o mesmo "tamanho"
    long int +ou- 2147483647 e unsigned vai até 2147483647*/

    cout << "Valor de ui: " << ui << endl;
    cout << "Valor de li após atribuição de ui: " << li << endl;

    li = 200; 
    ui = li; /* nessa conversão também não tem problema, o B.O. seria se li fosse negativo*/

    cout << "Valor de li: " << li << endl;
    cout << "Valor de ui após atribuição de li: " << ui << endl;

    return 0;
}
