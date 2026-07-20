#include <iostream>
using namespace std;

int main()
{
    // =========================================
    //              ASCII MEMORY MAP
    // =========================================
    //
    // 0   - 31   : Control Characters
    // 32         : Space
    // 33  - 47   : Special Characters
    // 48  - 57   : Digits (0 - 9)
    // 58  - 64   : Special Characters
    // 65  - 90   : Uppercase Letters (A - Z)
    // 91  - 96   : Special Characters
    // 97  - 122  : Lowercase Letters (a - z)
    // 123 - 126  : Special Characters
    // 127        : DEL (Delete)
    //
    // Important:
    // Space = 32
    // 0-9   = 48-57
    // A-Z   = 65-90
    // a-z   = 97-122
    // Difference (Upper ↔ Lower) = 32
    // =========================================

    // ==============================
    // ASCII Table Basics
    // ==============================

    cout << "ASCII of A : " << (int)'A' << endl;
    cout << "ASCII of Z : " << (int)'Z' << endl;

    cout << "ASCII of a : " << (int)'a' << endl;
    cout << "ASCII of z : " << (int)'z' << endl;

    cout << "ASCII of 0 : " << (int)'0' << endl;
    cout << "ASCII of 9 : " << (int)'9' << endl;

    cout << "ASCII of Space : " << (int)' ' << endl;

    cout << endl;

    // ==============================
    // ASCII Number -> Character
    // ==============================

    cout << "65 = " << (char)65 << endl;
    cout << "97 = " << (char)97 << endl;
    cout << "48 = " << (char)48 << endl;

    cout << endl;

    // ==============================
    // Character -> ASCII
    // ==============================

    char ch = 'H';

    cout << ch << " = " << (int)ch << endl;

    cout << endl;

    // ==============================
    // Print A-Z
    // ==============================

    cout << "Capital Letters" << endl;

    for (char c = 'A'; c <= 'Z'; c++)
    {
        cout << c << " = " << (int)c << endl;
    }

    cout << endl;

    // ==============================
    // Print a-z
    // ==============================

    cout << "Small Letters" << endl;

    for (char c = 'a'; c <= 'z'; c++)
    {
        cout << c << " = " << (int)c << endl;
    }

    cout << endl;

    // ==============================
    // Print Digits
    // ==============================

    cout << "Digits" << endl;

    for (char c = '0'; c <= '9'; c++)
    {
        cout << c << " = " << (int)c << endl;
    }

    cout << endl;

    // ==============================
    // Uppercase -> Lowercase
    // ==============================

    char upper = 'G';

    char lower = upper + 32;

    cout << upper << " -> " << lower << endl;

    cout << endl;

    // ==============================
    // Lowercase -> Uppercase
    // ==============================

    char small = 'm';

    char capital = small - 32;

    cout << small << " -> " << capital << endl;

    cout << endl;

    // ==============================
    // Check Character Type
    // ==============================

    char x;

    cout << "Enter any character : ";
    cin >> x;

    if (x >= 'A' && x <= 'Z')
        cout << "Uppercase Letter";

    else if (x >= 'a' && x <= 'z')
        cout << "Lowercase Letter";

    else if (x >= '0' && x <= '9')
        cout << "Digit";

    else
        cout << "Special Character";

    return 0;
}
