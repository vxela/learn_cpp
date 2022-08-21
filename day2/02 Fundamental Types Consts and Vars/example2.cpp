// To display hexadecimal integer literal and
// decimal integer literals.
// 
#include <iostream>

using namespace std;

int main() {
    //  count outputs integers as decimal integers:
    cout << "Value of 0xFF = " << 0xFF << " decimal " << endl; // Output: 255 decimal
    // The manipulator hex changes output to hexadecimal
    // format (dec changes to decimal format)
    cout << "Value of 27 = " << hex << 27 << " hexadesimal" << endl; // Output: 1b hexadecimal
    
    return 0;
}