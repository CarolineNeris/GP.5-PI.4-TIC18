#include <iostream>

int main() {
    double d = 1.0 / 3.0;
    long double ld = 1.0 / 3.0;

    std::cout << "Valor de double: " << d << std::endl;
    std::cout << "Valor de long double: " << ld << std::endl;

    return 0;
}
/*No meu sistema eles não apresentam diferença de precisão na hora do resultado, apresentando o mesmo número de casas decimais */