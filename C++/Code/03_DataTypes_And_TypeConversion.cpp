#include <iostream>
#include <string>
using namespace std;

int main()
{
// ┌─────────────────────────────────────────────────────────┐
// │                     DATA TYPES                          │
// └─────────────────────────────────────────────────────────┘

    // FUNDAMENTAL (PRIMITIVE) DATA TYPES
    // -------------------------------------------------

    // Integer Types (Whole Numbers)
    short smallNumber = 32000;                  // Small integer
    int age = 19;                               // Standard integer
    long population = 1500000L;                 // Large integer
    long long stars = 9223372036854775807LL;    // Very large integer

    // Floating Point Types (Decimal Numbers)
    float pi = 3.14f;                           // Single precision
    double salary = 55000.756;                  // Double precision
    long double scientificValue = 3.141592653589793238L; // Highest precision

    // Character Type
    char grade = 'A';                           // Single character

    // Boolean Type
    bool isStudent = true;                      // true or false

    // Void -> void stores nothing .Used mainly as function return type or pointer type.
    // string -> Standard Library Class (User-defined class provided by the library). string is library class not a datatype




    // DERIVED DATA TYPES
    // -------------------------------------------------

    // Array
    int marks[5] = {90, 85, 88, 95, 80};

    // Pointer
    int number = 10;
    int* ptr = &number;

    // Reference
    int& ref = number;

    // Function
    // Functions are also considered a derived data type.




    // USER-DEFINED DATA TYPES
    // -------------------------------------------------

    // class
    // Created by the programmer.

    // struct
    // Groups different data types together.

    // union
    // Shares the same memory among members.

    // enum
    // Represents a collection of named constants.



// ┌─────────────────────────────────────────────────────────┐
// │                    TYPE CONVERSION                      │
// └─────────────────────────────────────────────────────────┘

    // ==========================================
    // IMPLICIT TYPE CONVERSION (Automatic)
    // ==========================================

    int age = 19;
    double newAge = age;      // int -> double

    char grade = 'A';
    int ascii = grade;         // char -> int

    bool isStudent = true;
    int value = isStudent;     // bool -> int


    // ==========================================
    // EXPLICIT TYPE CONVERSION (Type Casting)
    // ==========================================

    double pi = 3.14159;

    int integerValue = (int)pi;                // C-Style Casting

    int integerValue2 = static_cast<int>(pi);  // Modern C++ Casting


    // INTEGER TO CHARACTER
    // ==========================================

    int number = 66;
    char letter = (char)number;


    // CHARACTER TO INTEGER
    // ==========================================

    char alphabet = 'Z';
    int asciiValue = alphabet;


    // STRING CONVERSION
    // ==========================================

    string mark = "100";
    int totalMarks = stoi(mark);

    int score = 95;
    string scoreText = to_string(score);
    return 0;
}