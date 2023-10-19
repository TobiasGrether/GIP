#include <iostream>

using namespace std;

int main() {
    char buchstabe;

    cout << "Bitte geben sie den Buchstaben ein: ?" << endl;

    cin >> buchstabe;

    int ascii = buchstabe;
    int position = ascii - 96;

    cout << "Der Buchstabe " << buchstabe << " hat die Position " << position << " im Alphabet" << endl;

    system("pause");

    return 0;
}
