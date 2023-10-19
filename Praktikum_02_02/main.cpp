#include <iostream>
using namespace std;
int main() {
    double length;

    cout << "Bitte geben sie die Laenge in Metern ein: ?";

    cin >> length;

    double foot = length * 3.2808;

    cout << "Die Laenge in Fuss lautet: " << foot << endl;

    system("pause");

    return 0;
}
