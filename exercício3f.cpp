#include <iostream>
#include <limits>
using namespace std;
int main() {
    unsigned int ui_max = numeric_limits<unsigned int>::max();
    unsigned int ui_min = numeric_limits<unsigned int>::min();
    cout << "Maior valor representável por um unsigned int: " << ui_max << endl;
    cout << "Menor valor representável por um unsigned int: " << ui_min << endl;
    return 0;
}


/* como ui é não negativo vai até 4294967295 partindo do 0 que é o mesmo tamanho do int 
Observe: 2147483647 + 2147483648 = 4.294.967.295*/ 
