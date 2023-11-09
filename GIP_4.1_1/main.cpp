// GIP-INF Praktikum, WiSe 2023/2024
//
// Datei: INF_04_01_caesar_vorgegebenes_main.cpp
//

#include <iostream>
#include <string>
using namespace std;

// Hier die von Ihnen programmierte Funktion einfügen ...
string caesar(string original_text, unsigned int v)
{
    string result = "";
    // Durchlaufe den gesamten String für jeden einzelnen Buchstaben
    for (int i = 0; i < original_text.length(); i++)
    {
        // Aktuellen char aus dem String auslesen
        char currentChar = original_text[i];

        // Alle Zeichen die nicht in A..Z und a..z sind, werden ignoriert und einfach wieder angehangen
        if (!((currentChar >= 'a' && currentChar <= 'z') || (currentChar <= 'Z' && currentChar >= 'A')))
        {
            result += currentChar;
            continue;
        }

        // numerische representation des Chars
        int numeric = currentChar;

        // Upper Bound ist die obere Grenze des Zeichenbereichs, also Z für großbuchstaben und z für kleinbuchstaben
        int upperBound = 0;
        // Lower Bound ist die untere Grenze des Zeichenbereichs, also A für großbuchstaben und a für kleinbuchstaben
        int lowerBound = 0;
        // Block size ist die größe des Zeichenbereichs, in unserem Beispiel 26
        int blockSize;

        // converted wird der finale Buchstabe, der angehangen wird
        char converted;

        // Prüfe ob der aktuelle Buchstabe ein kleinbuchstabe ist, wenn ja setze werte entsprechend
        if (currentChar >= 'a' && currentChar <= 'z')
        {
            upperBound = 'z';
            lowerBound = 'a';
            blockSize = 'z' - 'a';
        }
        // Prüfe ob der aktuelle Buchstabe ein großbuchstabe ist, wenn ja setze werte entsprechend
        else if (currentChar >= 'A' && currentChar <= 'Z')
        {
            blockSize = 'Z' - 'A';
            lowerBound = 'A';
            upperBound = 'Z';
        }

        // bei der rechnung 'z' - 'a' kommt 25 raus, sollte aber 26 sein, daher +1
        blockSize += 1;

        // sollte v größer als unser Block sein, also 26, kann man mit % 26 den Wert errechnen, um den eigentlich erhöht werden muss
        int actualShift = (v % blockSize);

        // Falls der aktuelle Buchstabe + den shift außerhalb unseres Zeichenbereichs landen, bspw. X + 5, müssen wir Wrap-Around anwenden
        if (numeric + actualShift > upperBound)
        {
            // Die Distanz zwischen dem aktuellen Buchstaben und der oberen Grenze (Z - X = 2)
            int distanceToBreak = upperBound - currentChar;
            // Die Distanz, die nach Wrap-Around noch hinzugefügt werden muss, um exakt actualShift Zeichen zu laufen
            int additionalDistanceNeeded = (actualShift - distanceToBreak);

            // Der eigentliche Buchstabe
            converted = lowerBound + additionalDistanceNeeded - 1;
        }
        else
        {
            // Im falle, dass der actualShift innerhalb des Zeichenbereichts liegt, können wir einfach addieren und weitermachen.
            converted = currentChar + actualShift;
        }

        result += converted;
    }

    return result;
}

bool assert_equal(string original_text, unsigned int v, string erwarteter_verschluesselter_text)
{
    string berechneter_verschluesselter_text = caesar(original_text, v);

    if (berechneter_verschluesselter_text != erwarteter_verschluesselter_text)
    {
        cout << "Verschluesselungs-Test fehlgeschlagen (test case failed)!\n  Erwartet:  "
             << erwarteter_verschluesselter_text << endl
             << "  Berechnet: "
             << berechneter_verschluesselter_text << endl
             << "  Originaltext: " << original_text << endl
             << "  Anzahl Verschiebepositionen: " << v << endl;
        return false;
    }
    else
    {
        cout << "Verschluesselungs-Test erfolgreich (test case passed)! "
             << original_text
             << "  ==(" << v << ")==>  "
             << berechneter_verschluesselter_text << endl;
        return true;
    }
}

bool do_testcases()
{
    bool test_resultat = true;
    test_resultat = assert_equal("abc", 2, "cde") && test_resultat;
    test_resultat = assert_equal("ABC", 2, "CDE") && test_resultat;
    test_resultat = assert_equal("abc.,!?", 4, "efg.,!?") && test_resultat;
    test_resultat = assert_equal("apz", 2, "crb") && test_resultat;
    test_resultat = assert_equal("xYz. ABC", 5, "cDe. FGH") && test_resultat;
    test_resultat = assert_equal("., !?", 4, "., !?") && test_resultat;
    test_resultat = assert_equal("abcXYZ!", 0, "abcXYZ!") && test_resultat;
    test_resultat = assert_equal("", 7, "") && test_resultat;
    test_resultat = assert_equal("aBxYz!", 26, "aBxYz!") && test_resultat;
    test_resultat = assert_equal("aB!", 28, "cD!") && test_resultat;
    test_resultat = assert_equal("aBxYz!", 52, "aBxYz!") && test_resultat;
    test_resultat = assert_equal("aBxYz!", 78, "aBxYz!") && test_resultat;
    test_resultat = assert_equal("aBxYz!", 99, "vWsTu!") && test_resultat;
    test_resultat = assert_equal("abc def xyz!ABC XYZ?", 3, "def ghi abc!DEF ABC?") && test_resultat;
    test_resultat = assert_equal("Abc Zyx!", 55, "Def Cba!") && test_resultat;
    return test_resultat;
}

int main()
{
    if (do_testcases())
    {
        string text = "";
        unsigned int v = 0;
        cout << "Bitte geben Sie den zu verschluesselnden Text ein: ? ";
        getline(cin, text);
        cout << "Bitte geben Sie die Anzahl Verschiebepositionen "
             << "ein (als positive ganze Zahl): ? ";
        cin >> v;

        cout << "Verschluesselt: " << caesar(text, v) << endl;
    }

    system("PAUSE");
    return 0;
}
