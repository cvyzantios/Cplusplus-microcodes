#include <iostream>
#include <cstring>     // Provides C-style string functions such as strcat()
#include <limits>      // Provides numeric_limits for input validation

using namespace std;


int main()
{
    char input;        // Stores the user's choice to continue or exit

    do
    {
        int choice;    // Stores the selected menu option


        // ==========================================
        // Main menu
        // ==========================================

        cout << "\n==============================\n";
        cout << "          MAIN MENU\n";
        cout << "==============================\n";

        cout << "(1) Add numbers\n";
        cout << "(2) Concatenate strings\n";
        cout << "Choice: ";


        // ==========================================
        // Validate menu input
        // ==========================================

        if (!(cin >> choice))
        {
            cout << "Invalid input. Please enter a number.\n";

            cin.clear();
            // Clear the error state of cin

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // Remove the invalid characters from the input buffer

            continue;
            // Go back to the beginning of the do-while loop
        }


        // ==========================================
        // Option 1 - Add two numbers
        // ==========================================

        if (choice == 1)
        {
            int a, b;

            cout << "Enter two numbers: ";


            // Validate number input

            if (!(cin >> a >> b))
            {
                cout << "Invalid numbers.\n";

                cin.clear();

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                continue;
            }


            cout << "Sum is: "
                 << a + b
                 << '\n';
        }


        // ==========================================
        // Option 2 - Concatenate two strings
        // ==========================================

        else if (choice == 2)
        {
            char s1[200];
            char s2[200];


            cout << "Enter first string: ";
            cin >> s1;


            cout << "Enter second string: ";
            cin >> s2;


            // Concatenate the second string
            // to the end of the first string

            strcat(s1, s2);


            cout << "Concatenation is: "
                 << s1
                 << '\n';
        }


        // ==========================================
        // Invalid menu option
        // ==========================================

        else
        {
            cout << "Invalid choice.\n";
        }


        // ==========================================
        // Continue or exit
        // ==========================================

        cout << "\nPress a key and ENTER to continue";
        cout << " or 'q' and ENTER to exit: ";

        cin >> input;


        // Exit if the user enters q or Q

        if (input == 'q' || input == 'Q')
        {
            break;
        }


    } while (true);


    // ==========================================
    // Program termination
    // ==========================================

    cout << "\nGoodbye!" << endl;


    return 0;
}