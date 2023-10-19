#include <iostream>
using namespace std;
int main() {
    double temps;

    cout << "Bitte geben Sie die Temperatur in Grad Celsius ein: ? " << endl;

    cin >> temps;

    double fahrenheit = temps * 1.8 + 32;

    cout << "Die Temperatur in Fahrenheit lautet: " << fahrenheit << endl;

    system("pause");

    return 0;
}
