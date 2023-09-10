#include <iostream>
#include <limits>
using namespace std; 
int main() {
    long int li_max = numeric_limits<long int>::max();
    long int li_min = numeric_limits<long int>::min();
    cout << "Maior valor representável por um long int: " << li_max << endl;
    cout << "Menor valor representável por um long int: " << li_min << endl;

    return 0;
}


/*Usamos de novo a biblioteca limits, "quem tem limite é estado, nois não heheh"*/