#include <iostream>
#include <climits>          // Defenition of INT_MIN, ...

using namespace std;

void line();

int main() {
    cout << "Range of types iint and unsigned int" 
    << endl << endl;

    cout << "Type\tMuinimum\tMaximum" << endl;
    line();

    cout << "int\t" << INT_MIN << "\t" << INT_MAX << endl;
    cout << "uint\t" << 0 << "\t" << UINT_MAX << endl;
    
    return 0;

}

void line() {
    cout << "======================================================"<<endl;
}