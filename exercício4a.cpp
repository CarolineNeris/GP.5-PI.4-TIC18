#include <iostream>
#include <limits>
using namespace std;

int main() {
    float menor_float = numeric_limits<float>::min();
    float maior_float = numeric_limits<float>::max();

    cout << "Menor valor representável por um float: " << menor_float << endl;
    cout << "Maior valor representável por um float: " << maior_float << endl;

    return 0;
}


/*Olha a biblioteca limits aí de novo, é importante fixar que numeric_limits serve para trabalaha os limites 
numéricos*/
