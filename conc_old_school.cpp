#include <iostream>   // Library for input and output
#include <cstring>    // Library for C-style string functions
#include <conio.h>    // Provides getch() for reading a key without Enter

using namespace std;


int main()
{
    char input;        // Stores the key pressed by the user


    // ==========================================
    // Main program loop
    // ==========================================

    do
    {
        int choice;    // Stores the user's menu choice


        // ==========================================
        // Display menu
        // ==========================================

        cout << "\n==============================\n";
        cout << "          MAIN MENU\n";
        cout << "==============================\n";

        cout << "(1) Add numbers\n";
        cout << "(2) Concatenate strings\n";

        cout << "Choice: ";

        cin >> choice;
        // Read the user's menu choice



        // ==========================================
        // Option 1 - Add two numbers
        // ==========================================

        if (choice == 1)
        {
            int a, b;
            // Variables for the two numbers


            cout << "Enter two numbers: ";

            cin >> a >> b;
            // Read both numbers


            cout << "Sum is: "
                 << a + b
                 << '\n';
            // Calculate and display the sum
        }



        // ==========================================
        // Option 2 - Concatenate two strings
        // ==========================================

        else if (choice == 2)
        {
            char s1[200], s2[200];
            // Arrays for storing the two strings


            cout << "Enter two strings: ";

            cin >> s1;
            cin >> s2;
            // Read both strings


            strcat(s1, s2);
            // Append s2 to the end of s1


            cout << "Concatenation is: "
                 << s1
                 << '\n';
            // Display the combined string
        }



        // ==========================================
        // Invalid menu choice
        // ==========================================

        else
        {
            cout << "Invalid choice.\n";
        }



        // ==========================================
        // Ask user whether to continue
        // ==========================================

        cout << "\nPress any key to continue";
        cout << " or 'q' to exit: ";


        input = getch();
        // Read one key immediately
        // No ENTER key is required



        cout << '\n';


    }
    while (input != 'q' && input != 'Q');
    // Repeat the program while the user
    // has not pressed q or Q



    // ==========================================
    // Program termination
    // ==========================================

    cout << "Goodbye!" << endl;


    return 0;
    // End the program successfully
}