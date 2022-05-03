// Version 0.1 Rechner by Rudolf

#include <iostream>
#include <ostream>
using namespace std;

int main()
{
    double zahl1 = 0, zahl2 = 0, result = 0;
    char zeichen;

    cout << "Taschenrechner Version 0.1" << endl
        << "Geben Sie die erste Zahl an: ";
    cin >> zahl1;
    cout << endl << "Geben Sie den Operator an: " << endl;
    cin >> zeichen;
    cout << endl << "Geben Sie die zweite Zahl an: ";
    cin >> zahl2;

    if (zeichen == '-') 
        result = zahl1 - zahl2;
    else if (zeichen == '+')
        result = zahl1 + zahl2;
    else if (zeichen == '/') 
        result = zahl1 / zahl2;
    else if (zeichen == '*') 
        result = zahl1 * zahl2;

    cout << endl << "Die Lösung ist: ";
    cin >> result;
    return 0;
}