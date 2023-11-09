#include <iostream>
using namespace std;
int main()
{
    string eingabe[11];
    int sodoku[9][9];

    cout << "Bitte geben sie das Soduku ein: " << endl;

    for(int i = 0; i < 11; i++) {
        getline(cin, eingabe[i]);
    }

    int zeile = 0, spalte = 0;

    for(int y = 0; y < 11; y++) {
        spalte = 0;
        if(y == 3 || y == 7) continue;

        for(int x = 0; x < eingabe[y].length(); x++) {
            if(eingabe[y][x] >= '0' && eingabe[y][x] <= '9') {
                sodoku[zeile][spalte] = eingabe[y][x] - '0';

                spalte++;
            }
        }

        zeile++;
    }

    cout << endl << "Das Soduku lautet:"; 

    for(int y = 0; y < 9; y++) {
        cout << endl;
        if(y == 3 || y == 6) {
            cout << "=======//=======//=======" << endl; 
        }

        for(int x = 0; x < 9; x++) {
            cout << ";" << sodoku[y][x];

            if(x == 2 || x == 5) {
                cout << ";//";
            }
        }
    }

    system("pause");
    return 0;
}