#include <iostream>

using namespace std;

int main() {
    double seitenlaenge;

    cout << "Bitte geben sie die Seitenlaenge ein (in cm): ?";

    cin >> seitenlaenge;
    cout << "Der Umfang des Quadrats beträgt (in cm): " << seitenlaenge * 4 << endl;
    cout << "Die Flaeche des Quadrats beträgt (in cm * cm): " << seitenlaenge * seitenlaenge << endl;

    system("pause");
    return 0;
}
