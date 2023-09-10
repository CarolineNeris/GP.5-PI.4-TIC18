#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Maior valor representável por um int: " << numeric_limits<int>::max() << endl;
    cout << "Menor valor representável por um int: " << numeric_limits<int>::min() << endl;

    return 0;
}


/* Optamos usar a biblioteca limits
A biblioteca limits é parte da Biblioteca Padrão C++ (STL - Standard Template Library) e fornece 
informações sobre os limites dos tipos numéricos, como inteiros e números em ponto flutuante, 
que podem ser representados em uma implementação específica da linguagem C++. Isso inclui 
informações sobre os valores mínimo e máximo que podem ser armazenados em cada tipo numérico, 
bem como outras informações relacionadas aos tipos*/ 