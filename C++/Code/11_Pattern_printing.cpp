/*
==============================================================
Topic      : Pattern Printing
Project    : Code Evolution
Language   : C++
==============================================================

Topics Covered

1. Square Pattern
2. Rectangle Pattern
3. Right Triangle
4. Inverted Triangle
5. Number Triangle
6. Inverted Number Triangle
7. Repeated Number Pattern
8. Alphabet Triangle
9. Reverse Alphabet Triangle
10. Floyd's Triangle

==============================================================
*/

#include <iostream>
using namespace std;

int main()
{

    /*
    ==============================================================
    1. Square Pattern

    Visualization

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

    Observation

    Rows    = 5
    Columns = 5

    Logic

    Outer Loop -> Controls Rows

    Inner Loop -> Prints 5 Stars in every Row

    ==============================================================
    */

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    cout<<endl;


    /*
    ==============================================================
    2. Rectangle Pattern

    Visualization

    * * * * * * *
    * * * * * * *
    * * * * * * *
    * * * * * * *

    Observation

    Rows = 4
    Columns = 7

    Logic

    Outer Loop -> Rows

    Inner Loop -> Columns

    ==============================================================
    */

    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=7;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    cout<<endl;


    /*
    ==============================================================
    3. Right Triangle

    Visualization

    *
    * *
    * * *
    * * * *
    * * * * *

    Observation

    Row 1 -> 1 Star

    Row 2 -> 2 Stars

    Row 3 -> 3 Stars

    Row 4 -> 4 Stars

    Row 5 -> 5 Stars

    Logic

    Outer Loop -> Rows

    Inner Loop -> Current Row Number

    ==============================================================
    */

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    cout<<endl;


    /*
    ==============================================================
    4. Inverted Triangle

    Visualization

    * * * * *
    * * * *
    * * *
    * *
    *

    Observation

    Stars decrease every row.

    Logic

    Outer Loop -> Rows

    Inner Loop -> Remaining Stars

    ==============================================================
    */

    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    cout<<endl;


    /*
    ==============================================================
    5. Number Triangle

    Visualization

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

    Observation

    Every row starts from 1.

    Last number equals Row Number.

    Logic

    Outer Loop -> Rows

    Inner Loop -> Prints 1 to Current Row

    ==============================================================
    */

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }

    cout<<endl;


    /*
    ==============================================================
    6. Inverted Number Triangle

    Visualization

    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1

    Observation

    Numbers always start from 1.

    Count decreases every row.

    ==============================================================
    */

    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }

    cout<<endl;


    /*
    ==============================================================
    7. Repeated Number Pattern

    Visualization

    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

    Observation

    Row Number is printed.

    Logic

    Outer Loop -> Current Number

    Inner Loop -> Print Current Number

    ==============================================================
    */

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }

        cout<<endl;
    }

    cout<<endl;


    /*
    ==============================================================
    8. Alphabet Triangle

    Visualization

    A
    A B
    A B C
    A B C D
    A B C D E

    Observation

    Starts from A.

    Last Letter = Current Row

    ==============================================================
    */

    for(char i='A';i<='E';i++)
    {
        for(char j='A';j<=i;j++)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }

    cout<<endl;


    /*
    ==============================================================
    9. Reverse Alphabet Triangle

    Visualization

    A B C D E
    A B C D
    A B C
    A B
    A

    ==============================================================
    */

    for(char i='E';i>='A';i--)
    {
        for(char j='A';j<=i;j++)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }

    cout<<endl;


    /*
    ==============================================================
    10. Floyd's Triangle

    Visualization

    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15

    Observation

    Number never resets.

    Number keeps increasing.

    Logic

    Create a variable.

    Print it.

    Increment after every print.

    ==============================================================
    */

    int num = 1;

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }

        cout<<endl;
    }

    return 0;
}