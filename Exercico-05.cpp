#include <iostream>

using namespace std;

int main() {
    // Inteiros
    int zeroInt = 0;
    int nonZeroInt = 42;
    cout << "int zero: " << (zeroInt? "true" : "false") << endl;  
    cout << "int non-zero: " << (nonZeroInt? "true" : "false") << endl;  

    // Floats
    float zeroFloat = 0.0f;
    float nonZeroFloat = 3.14f;
    cout << "float zero: " << (zeroFloat? "true" : "false") << endl;  // 
    cout << "float non-zero: " << (nonZeroFloat? "true" : "false") << endl;  

    // Doubles
    double zeroDouble = 0.0;
    double nonZeroDouble = 3.141592653589793;
    cout << "double zero: " << (zeroDouble? "true" : "false") << endl;  // 
    cout << "double non-zero: " << (nonZeroDouble? "true" : "false") << endl;  

    // Caracteres
    char zeroChar = '\0';  
    char nonZeroChar = 'A';
    cout << "char zero: " << (zeroChar? "true" : "false") << endl;  // 
    cout << "char non-zero: " << (nonZeroChar? "true" : "false") << endl;  

    // Bool
    bool trueBool = true;
    bool falseBool = false;
    cout << "bool true: " << (trueBool? "true" : "false") << endl;  
    cout << "bool false: " << (falseBool? "true" : "false") << endl;  // 

    return 0;
}
