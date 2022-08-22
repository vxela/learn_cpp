#include <iostream>

using namespace std;

int gVar1;              // Global variables,
int gVar2 = 2;           // explicit initialization

int main() {

    char ch('A');       // local variable being initialized or: char ch = 'A'
    cout << "Value of gvar1 : " << gVar1 << endl;
    cout << "Value of gvar2 : " << gVar2 << endl;
    cout << "Character in ch : " << ch << endl;

    int sum, number = 3;        // local variable with and without initialization
    sum = number + 5;

    cout << "Value of sum : " << sum << endl;

}