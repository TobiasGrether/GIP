#include <iostream>


char a;
char b;
int c;

int main() {

    std::cout << "Bitte geben Sie die erste Ziffer ein: ?" << std::endl;
    std::cin >> a ;
    std::cout << "Bitte geben Sie die zweite Ziffer ein: ?" << std::endl;
    std::cin >> b;
    int  d = a -'0' + b- '0' ; // man wandelt a und b in Int. Wenn a z.b 3 ist dann wird das ergebnis der Subtraktion 3 da man 3 -0 rechnet. Bei b das selbe
    if (a == 'q' || b == 'q') {
        c = 1, std::cout << "Das Programm wurde durch Eingabe von q beendet." << std::endl;
    }
   else if (a == 'q' && b == 'q') {
       c = 1, std::cout << "Das Programm wurde durch Eingabe von q beendet." << std::endl;
   }

    else {
    std::cout << a <<  " + "<<  b << " = " << d << std::endl, c = 0 ;
}
    return c;
}