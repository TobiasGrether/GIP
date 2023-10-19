#include <iostream>

using namespace std;

int main() {
    int v1;
    int v2;

    cout << "Bitte geben sie den ganzzahligen Wert der ersten Variable ein: ?";

    cin >> v1;

    cout << "Bitte geben sie den ganzzahliegen Wert der zweite Variable ein: ?";
    cin >> v2;


    int v_tmp;
    v_tmp = v1;
    v1 = v2;
    v2 = v_tmp;
    cout << "Nach dem Tausch:" << endl;
    cout << "Wert der ersten Variable: " << v1 << endl;
    cout << "Wert der zweiten Variable: " << v2 << endl;

    system("pause");
    return 0;
}
