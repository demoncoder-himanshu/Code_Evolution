// Includes the iostream header file.
// Provides input (cin) and output (cout) functionality.
#include <iostream>

// Namespace Section:
// Allow us to use standard library names and without writing (std::) repeatly.
using namespace std;

// Function Section:
// Program execution starts from the main() function.
int main(){
    // Variable Declaration:
    // Declares a string variable named 'name' and Memory is allocated to store the user's input.
    string name;

    // Output Section:
    // Display a message.
    cout << "Enter your name: ";

    // Input Section:
    // using for take input from the user and store in name variable;
    cin >> name;

    // Output Section:
    // Display greeting message.
    cout << "Hello! I am " << name <<endl; // endl use for end line.
    
    // End Point:
    // Ends the program and returns 0 and to indicate successful execution.
    return 0;
}