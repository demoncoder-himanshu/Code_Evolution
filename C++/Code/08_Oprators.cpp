#include <iostream>
using namespace std;

int main() {

    int variable1;
    int variable2;

    cout << "Enter Variable1: ";
    cin >> variable1;

    cout << "Enter Variable2: ";
    cin >> variable2;

    cout << "\n===========================================================\n";

    bool condition1 = true;
    bool condition2 = false;

    // ===========================================================
    //                  1. ARITHMETIC OPERATORS
    // ===========================================================

    cout << "Addition (+): " << variable1 + variable2 << endl;
    cout << "Subtraction (-): " << variable1 - variable2 << endl;
    cout << "Multiplication (*): " << variable1 * variable2 << endl;
    cout << "Division (/): " << variable1 / variable2 << endl;
    cout << "Modulo (%): " << variable1 % variable2 << endl;

    cout << "\n===========================================================\n";

    // ===========================================================
    //                  2. ASSIGNMENT OPERATORS
    // ===========================================================

    int a = 10;

    a = 20;
    cout << "=: " << a << endl;

    a += 5;
    cout << "+=: " << a << endl;

    a -= 5;
    cout << "-=: " << a << endl;

    a *= 2;
    cout << "*=: " << a << endl;

    a /= 4;
    cout << "/=: " << a << endl;

    a %= 3;
    cout << "%=: " << a << endl;

    cout << "\n===========================================================\n";

    // ===========================================================
    //                  3. RELATIONAL OPERATORS
    // ===========================================================

    cout << "== : " << (variable1 == variable2) << endl;
    cout << "!= : " << (variable1 != variable2) << endl;
    cout << ">  : " << (variable1 > variable2) << endl;
    cout << "<  : " << (variable1 < variable2) << endl;
    cout << ">= : " << (variable1 >= variable2) << endl;
    cout << "<= : " << (variable1 <= variable2) << endl;

    cout << "\n===========================================================\n";

    // ===========================================================
    //                  4. LOGICAL OPERATORS
    // ===========================================================

    cout << "AND (&&): " << (condition1 && condition2) << endl;
    cout << "OR (||): " << (condition1 || condition2) << endl;
    cout << "NOT (!): " << (!condition1) << endl;

    cout << "\n===========================================================\n";

    // ===========================================================
    //              5. INCREMENT / DECREMENT
    // ===========================================================

    int b = 10;

    cout << "Post Increment (b++): " << b++ << endl;
    cout << "Value of b: " << b << endl;

    cout << "Pre Increment (++b): " << ++b << endl;

    cout << "Post Decrement (b--): " << b-- << endl;
    cout << "Value of b: " << b << endl;

    cout << "Pre Decrement (--b): " << --b << endl;

    cout << "\n===========================================================\n";

    // ===========================================================
    //                  6. BITWISE OPERATORS
    // ===========================================================

    cout << "& : " << (variable1 & variable2) << endl;
    cout << "| : " << (variable1 | variable2) << endl;
    cout << "^ : " << (variable1 ^ variable2) << endl;
    cout << "~ : " << (~variable1) << endl;

    cout << "\n===========================================================\n";

    // ===========================================================
    //                  7. SHIFT OPERATORS
    // ===========================================================

    cout << "<< : " << (variable1 << 1) << endl;
    cout << ">> : " << (variable1 >> 1) << endl;

    cout << "\n===========================================================\n";

    // ===========================================================
    //                  8. TERNARY OPERATOR
    // ===========================================================

    cout << ((variable1 > variable2) ? "Variable1 is Greater" : "Variable2 is Greater") << endl;

    cout << "\n===========================================================\n";

    // ===========================================================
    //                  9. SIZEOF OPERATOR
    // ===========================================================

    cout << "sizeof(variable1): " << sizeof(variable1) << " bytes" << endl;
    cout << "sizeof(double): " << sizeof(double) << " bytes" << endl;

    cout << "\n===========================================================\n";

    // ===========================================================
    //                  10. COMMA OPERATOR
    // ===========================================================

    int x, y;
    x = (y = 5, y + 10);

    cout << "Comma Operator Result: " << x << endl;

    cout << "\n===========================================================\n";

    // ===========================================================
    //                  11. SPECIAL OPERATORS
    // ===========================================================

    int arr[5] = {1,2,3,4,5};

    cout << "Array [] Operator: " << arr[2] << endl;

    int *ptr = new int(100);

    cout << "new Operator: " << *ptr << endl;

    delete ptr;

    cout << "Pointer Deleted using delete." << endl;

    return 0;
}