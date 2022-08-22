#include <iostream>

using namespace std;

int main() {
    cout << "\nSize of Fundamental Types\n"
            << "Type\t\t\t\tNumber of bytes\n"
            << "====================================================" << endl;

    cout << "char\t\t\t\t" << sizeof(char) << endl;
    cout << "short\t\t\t\t" << sizeof(short) << endl;
    cout << "int\t\t\t\t" << sizeof(int) << endl;
    cout << "long\t\t\t\t" << sizeof(long) << endl;
    cout << "float\t\t\t\t" << sizeof(float) << endl;
    cout << "double\t\t\t\t" << sizeof(double) << endl;
    cout << "long double\t\t\t" << sizeof(long double) << endl;

    return 0;
}

// bool
// char
// wchat_t
// short
// int
// long
// float
// double
// long double

// uivalent to 2.
// Write a C++ program that displays the memory space required by each
// fundamental type on screen.
