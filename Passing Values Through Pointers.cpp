#include <iostream>   // Library for input and output

using namespace std;  // Allows use of cout and cin without std::


// Function prototype
// Receives:
// j     -> pointer to an integer
// value -> integer value to be copied
void f(int *j, int value);


int main()
{
    int x;
    // Variable that will store the number entered by the user

    cout << "Enter the age: ";
    // Ask the user for a number

    cin >> x;
    // Read the number and store it in x


    int i = 0;
    // Integer variable initialized to 0

    int *p;
    // Pointer to an integer


    p = &i;
    // Store the address of i in pointer p
    // p now points to i


    f(p, x);
    // Call function f
    // p contains the address of i
    // x contains the user-entered value


   // cout << i;
    // Print the value stored in i

cout << "\nAge is: " << i;
    return 0;
    // End the program successfully
}


// Function definition
void f(int *age, int value)
{
    *age = value;
    
    // Dereference pointer j
    // Store value in the memory location pointed to by j

    // Since j points to i,
    // this is equivalent to:

    // i = value;
    
}