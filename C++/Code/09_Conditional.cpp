#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter any integer: ";
    cin >> number;

    // SIMPLE if-else
    if (number > 0) {
        cout << "Number is Positive" << endl;
    } 
    else {
        cout << "Number is Negative or Zero" << endl;
    }

    // if - else if - else
    if (number > 0) {
        cout << "Positive number" << endl;
    }
    else if (number == 0) {
        cout << "Zero" << endl;
    }
    else {
        cout << "Negative number" << endl;
    }

    // NESTED if-else
    if (number != 0) {
        if (number > 0) {
            cout << "Nested: Positive" << endl;
        } else {
            cout << "Nested: Negative" << endl;
        }
    } else {
        cout << "Nested: Zero" << endl;
    }

    // SWITCH CASE
    switch (number) {
        case 1:
            cout << "Switch: Number is ONE" << endl;
            break;
        case 2:
            cout << "Switch: Number is TWO" << endl;
            break;
        case 0:
            cout << "Switch: Number is ZERO" << endl;
            break;
        default:
            cout << "Switch: Number is neither 0, 1 nor 2" << endl;
    }

    // Ternary oprator
    int num;
    cin >> num;
    cout << ((num % 2 == 0) ? "Even" : "Odd"); // basic


    int n;
    cin >> n;
    string type = (n > 0) ? "Positive" : (n < 0) ? "Negative" : "Zero";
    cout << type; // Advanced

    
    return 0;
}