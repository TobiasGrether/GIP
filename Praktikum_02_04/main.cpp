#include <iostream>
using namespace std;

int main() {
    double eingabe;
    int auswahl;

    cout << "Ihre Eingabe: ?";

    cin >> eingabe;

    cout << "Ihre Auswahl der Umwandlung:" << endl << " 1 - Celsius in Fahrenheit" << endl << " 2 - Meter in Fuss" << endl << " 3 - Euro in US Dollar" << endl;

    cin >> auswahl;

    // 0 * (eingabe * celsius) + 1 * (eingabe * fuss) + 0 * (eingabe * usd)
    int fahrenheit = 1 / auswahl;
    int fuss = 3 % auswahl;
    int dollar = 4 % auswahl;

    double result = (fahrenheit * (eingabe * 1.8 + 32)) + (fuss * (eingabe * 3.2808)) + (dollar * (eingabe * 1.2957));

    cout << "Das Ergebnis lautet: " << result << endl;

    system("pause");
}
