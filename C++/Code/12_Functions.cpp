/*
==========================================================
Topic      : Functions
Project    : Code Evolution
Language   : C++
==========================================================

Topics Covered

1. What is a Function?
2. Function Syntax
3. Function Declaration (Prototype)
4. Function Definition
5. Function Calling
6. Return Type
7. Parameters
8. Arguments
9. void Function
10. return Function

==========================================================
*/

#include <iostream>
using namespace std;

// ==========================================================
// Function Declaration (Prototype)
// Tells the compiler that these functions exist.
// ==========================================================

void greet();

void printLine();

int add(int a, int b);

// ==========================================================
// Main Function
// Program execution starts from here.
// ==========================================================

int main()
{
    // Function Calling
    // Calls the greet() function.

    greet();

    printLine();

    // Calling add() function and storing return value.

    int sum = add(10, 20);

    cout << "Sum = " << sum << endl;

    return 0;
}

// ==========================================================
// Function Definition
// Actual implementation of greet().
// ==========================================================

void greet()
{
    cout << "Welcome to Code Evolution" << endl;
}

// ==========================================================
// Function Definition
// Prints a separator line.
// ==========================================================

void printLine()
{
    cout << "--------------------------" << endl;
}

// ==========================================================
// Function Definition
// Takes two integers and returns their sum.
// ==========================================================

int add(int a, int b)
{
    return a + b;
}


/*
==========================================================
FUNCTION VISUALIZATION
==========================================================

Program Starts
      │
      ▼
+-------------------+
|    main()         |
+-------------------+
      │
      ▼
greet()
      │
      ▼
Print Welcome Message
      │
      ▼
printLine()
      │
      ▼
Print ----------
      │
      ▼
add(10,20)
      │
      ▼
Returns 30
      │
      ▼
main() receives 30
      │
      ▼
Print Sum
      │
      ▼
Program Ends

==========================================================
FUNCTION STRUCTURE
==========================================================

return_type function_name(parameters)
{
    // Code
}

Example

int add(int a, int b)
{
    return a + b;
}

==========================================================
FUNCTION BREAKDOWN
==========================================================

int
│
├── Return Type

add
│
├── Function Name

(int a, int b)
│
├── Parameters

{
    return a + b;
}
│
└── Function Body

==========================================================
IMPORTANT TERMS
==========================================================

Function
    -> A reusable block of code.

Prototype
    -> Function declaration before main().

Definition
    -> Actual function code.

Function Call
    -> Executes the function.

Parameter
    -> Variables received by function.

Argument
    -> Values passed while calling.

Return
    -> Sends value back to caller.

void
    -> Function returns nothing.

==========================================================
TYPES OF FUNCTIONS
==========================================================

1. No Return, No Parameter

void greet()

2. No Return, With Parameter

void greet(string name)

3. Return, No Parameter

int getNumber()

4. Return, With Parameter

int add(int a, int b)

==========================================================
FLOW

Declaration

↓

main()

↓

Function Call

↓

Execution

↓

Return (if any)

↓

Back to main()

==========================================================
*/