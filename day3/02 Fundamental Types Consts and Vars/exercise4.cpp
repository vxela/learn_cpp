#include <iostream>

using namespace std;

int main() {
    double x = 123.456F,
           y = 76.543F,
           sum;

    sum = x + y;

    cout << "Total :\t"
         << x << " + " << y << " = " << sum << endl;

    cout << "Difference:\t"
         << x << " - " << y << " = " << (x - y) << endl;
    
    return 0;
}