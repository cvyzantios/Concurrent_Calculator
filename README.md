
#include "pch.h" // Precompiled header file, if available
#include <iostream> // Including the input/output stream library
using namespace std;

// Declaration of functions before their use
int sum(int x, int y); // Function declaration for addition
int min(int x, int y); // Function declaration for subtraction
int mult(int x, int y); // Function declaration for multiplication
float division(int x, int y); // Function declaration for division

int main()
{
    int x, y;

    // Printing messages before inputting data
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    // Function calls and storing the results
    int result1 = sum(x, y); // Calling sum function
    int result2 = min(x, y); // Calling min function
    int result3 = mult(x, y); // Calling mult function
    float result4 = division(x, y); // Calling division function

    // Printing the results
    cout << "The addition result is " << result1 << endl;
    cout << "The subtraction result is " << result2 << endl;
    cout << "The multiplication result is " << result3 << endl;
    cout << "The division result is " << result4 << endl;

    return 0;
}

// Definition of the sum function
int sum(int x, int y)
{
    return x + y;
}

// Definition of the min function
int min(int x, int y)
{
    return x - y;
}

// Definition of the mult function
int mult(int x, int y)
{
    return x * y;
}

// Definition of the division function
float division(int x, int y)
{
    return static_cast<float>(x) / y; // Casts one operand to float to ensure floating point division
}
