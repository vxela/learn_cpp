#include <iostream>

using namespace std;

void pause();

int main() {
    cout << endl << "Dear reader, " << endl << "hace a ";
    
    pause();
    
    cout << "!" << endl;

    return 0;
}

void pause() {
    cout << "BREAK!";
}