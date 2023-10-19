#include <iostream>
using namespace std;
int main() {
    double euro;

    cout << "Bitte geben sie die Geldmenge in Euro ein: ?";
    cin >> euro;

    double dollar = euro * 1.2957;

    cout << "Die Geldmenge in US Dollar lautet: " << dollar << endl;

    system("pause");

    return 0;
}
