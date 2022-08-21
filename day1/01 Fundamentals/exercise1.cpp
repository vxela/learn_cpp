#include <iostream>

using namespace std;

void what();
void yes();

int main() {
    what();
    cout << "a happy day!" << endl;
    yes();
    cout << "what a happy day!" << endl;

}

void what() {
    cout << "Oh what" << endl;
}

void yes() {
    cout << "Oh yes" << endl;
}

/* Write a C++ program that outputs the following text on screen:
Oh what
a happy day!
Oh yes,
what a happy day!  */