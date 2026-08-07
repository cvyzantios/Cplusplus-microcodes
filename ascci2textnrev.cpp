#include <iostream>

using namespace std;


int main()
{
    int choice;          // Stores the menu option selected by the user

    char text[80];       // Array to store a string entered by the user

    int ascii[80];       // Array to store ASCII values

    int i;               // Loop counter



    do
    {

        // ==============================
        // Display main menu
        // ==============================

        cout << "\n==========================\n";
        cout << "       ASCII PROJECT\n";
        cout << "==========================\n";

        cout << "1. Convert text to ASCII\n";
        cout << "2. Convert ASCII to text\n";
        cout << "0. Exit\n";

        cout << "Choose option: ";
        cin >> choice;



        switch(choice)
        {


        case 1:

            // ====================================
            // Convert characters into ASCII values
            // ====================================


            cout << "Enter a text: ";

            cin >> text;
            // Store the word inside the character array


            cout << "\nASCII values:\n";


            for(i = 0; text[i] != '\0'; i++)
            {
                // Read every character until the end of string
                // '\0' indicates the end of the character array


                ascii[i] = (int)text[i];
                // Convert character into ASCII number


                cout << text[i]
                     << " = "
                     << ascii[i]
                     << endl;
            }


            break;



        case 2:

            // ====================================
            // Convert ASCII values into characters
            // ====================================


            int length;


            cout << "How many ASCII values do you want to enter? ";
            cin >> length;


            cout << "Enter ASCII values:\n";


            for(i = 0; i < length; i++)
            {
                // Read ASCII numbers from user

                cin >> ascii[i];
            }



            cout << "Converted text: ";


            for(i = 0; i < length; i++)
            {
                // Convert every ASCII number into character

                text[i] = (char)ascii[i];


                cout << text[i];
            }


            text[length] = '\0';
            // Add string termination character


            cout << endl;


            break;



        case 0:

            // Exit program

            cout << "Program terminated.\n";

            break;



        default:

            // Invalid menu option

            cout << "Invalid choice. Try again.\n";

        }


    } while(choice != 0);



    return 0;
}