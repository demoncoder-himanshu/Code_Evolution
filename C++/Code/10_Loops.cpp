/*
==========================================
Topic : Loops
Project : Code Evolution
==========================================

Topics Covered

1. for Loop
2. while Loop
3. do-while Loop
4. break
5. continue
6. Infinite Loops
7. Nested Loops (Basic Syntax)

==========================================
*/

#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // FOR LOOP
    // ==========================================

    cout << "For Loop\n";

    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }

    cout << "\n\n";

    // ==========================================
    // WHILE LOOP
    // ==========================================

    cout << "While Loop\n";

    int i = 1;

    while (i <= 5)
    {
        cout << i << " ";
        i++;
    }

    cout << "\n\n";

    // ==========================================
    // DO WHILE LOOP
    // ==========================================

    cout << "Do While Loop\n";

    int j = 1;

    do
    {
        cout << j << " ";
        j++;
    } while (j <= 5);

    cout << "\n\n";

    // ==========================================
    // BREAK
    // ==========================================

    cout << "Break Example\n";

    for (int k = 1; k <= 10; k++)
    {
        if (k == 6)
            break;

        cout << k << " ";
    }

    cout << "\n\n";

    // ==========================================
    // CONTINUE
    // ==========================================

    cout << "Continue Example\n";

    for (int k = 1; k <= 10; k++)
    {
        if (k == 6)
            continue;

        cout << k << " ";
    }

    cout << "\n\n";

    // ==========================================
    // INFINITE FOR LOOP
    // ==========================================

    /*
    for(;;)
    {
        cout<<"Infinite Loop";
    }
    */

    // ==========================================
    // INFINITE WHILE LOOP
    // ==========================================

    /*
    while(true)
    {
        cout<<"Infinite Loop";
    }
    */

    // ==========================================
    // INFINITE DO WHILE LOOP
    // ==========================================

    /*
    do
    {
        cout<<"Infinite Loop";
    }
    while(true);
    */

    // ==========================================
    // NESTED FOR LOOP
    // ==========================================

    cout << "Nested For Loop\n";

    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 3; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    cout << endl;

    // ==========================================
    // NESTED WHILE LOOP
    // ==========================================

    cout << "Nested While Loop\n";

    int row = 1;

    while (row <= 3)
    {
        int col = 1;

        while (col <= 3)
        {
            cout << "# ";
            col++;
        }

        cout << endl;
        row++;
    }

    cout << endl;

    // ==========================================
    // NESTED DO WHILE LOOP
    // ==========================================

    cout << "Nested Do While Loop\n";

    int r = 1;

    do
    {
        int c = 1;

        do
        {
            cout << "@ ";
            c++;
        }
        while (c <= 3);

        cout << endl;
        r++;
    }
    while (r <= 3);

    return 0;
}