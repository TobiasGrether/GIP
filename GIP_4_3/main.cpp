#include <iostream>
using namespace std;
int main() {

    int min = 0;
    int max = 0;
    int minIndex = 0;
    int maxIndex = 0;
    for(int i = 1; i <= 5; i++) {
        int eingabe;

        cout << "Bitte geben sie die " << i << ". Zahl ein ?";
        cin >> eingabe;
        cout << endl;

        if(eingabe > max || maxIndex == 0) {
            max = eingabe;
            maxIndex = i;
        }

        if(eingabe < min || minIndex == 0) {
            min = eingabe;
            minIndex = i;
        }
    }

    cout << "Die " << minIndex << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << min << endl;
    cout << "Die " << maxIndex << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << max << endl;

    system("pause");

    return 0;
}