#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    
    for(char c = '0'; c <= '9'; ++c) {
        cout << "'" << c << "' - " << static_cast<int>(c) << endl;
    }

    
    cout << "\nFormato com Octal e Hexadecimal:" << endl;
    for(char c = '0'; c <= '9'; ++c) {
        cout << "'" << c << "' - "
             << dec << static_cast<int>(c) << " "
             << oct << static_cast<int>(c) << " "
             << hex << static_cast<int>(c) << endl;
    }

    
    char inputChar;
    cout << "\nDigite um caractere: ";
    cin >> inputChar;
    cout << "'" << inputChar << "' - "
         << dec << static_cast<int>(inputChar) << " "
         << oct << static_cast<int>(inputChar) << " "
         << hex << static_cast<int>(inputChar) << endl;

    
    char specialChar1 = 'ç';
    char specialChar2 = 'ã';
    cout << "'" << specialChar1 << "' - "
         << dec << static_cast<int>(specialChar1) << " "
         << oct << static_cast<int>(specialChar1) << " "
         << hex << static_cast<int>(specialChar1) << endl;
    cout << "'" << specialChar2 << "' - "
         << dec << static_cast<int>(specialChar2) << " "
         << oct << static_cast<int>(specialChar2) << " "
         << hex << static_cast<int>(specialChar2) << endl;

    return 0;
}
