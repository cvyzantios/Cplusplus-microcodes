#include <iostream>   // Library for input and output
#include <fstream>    // Library for file handling

using namespace std;


// ==========================================
// Global arrays
// ==========================================

char text[80];        // Array for storing text
int ascii[80];        // Array for storing ASCII values

int length = 0;       // Stores the number of characters


// ==========================================
// Main function
// ==========================================

int main()
{
    int choice;        // Stores the user's menu choice
    int i;             // Loop counter


    // ==========================================
    // Main program loop
    // ==========================================

    do
    {
        // Display the main menu

        cout << "\n=============================\n";
        cout << "       ASCII PROJECT\n";
        cout << "=============================\n";

        cout << "1. Convert text to ASCII\n";
        cout << "2. Convert ASCII to text\n";
        cout << "3. Save ASCII report to file\n";
        cout << "4. Read ASCII report from file\n";
        cout << "0. Exit\n";

        cout << "Choose option: ";
        cin >> choice;


        // ==========================================
        // Menu selection
        // ==========================================

        switch (choice)
        {

        // ==========================================
        // Option 1
        // Text -> ASCII
        // ==========================================

        case 1:

            cout << "\nEnter text: ";
            cin >> text;

            // Calculate the number of characters
            // until the null character '\0'

            length = 0;

            while (text[length] != '\0')
            {
                length++;
            }


            cout << "\nASCII values:\n";


            // Convert every character into ASCII

            for (i = 0; i < length; i++)
            {
                ascii[i] = (int)text[i];

                cout << text[i]
                     << " = "
                     << ascii[i]
                     << endl;
            }

            break;


        // ==========================================
        // Option 2
        // ASCII -> Text
        // ==========================================

        case 2:

            cout << "\nHow many ASCII values do you want to enter? ";
            cin >> length;


            cout << "Enter ASCII values:\n";


            // Read ASCII numbers into the array

            for (i = 0; i < length; i++)
            {
                cin >> ascii[i];
            }


            cout << "\nConverted text: ";


            // Convert ASCII values into characters

            for (i = 0; i < length; i++)
            {
                text[i] = (char)ascii[i];

                cout << text[i];
            }


            // Add the null character
            // to mark the end of the string

            text[length] = '\0';

            cout << endl;

            break;


        // ==========================================
        // Option 3
        // Save ASCII report to TXT file
        // ==========================================

        case 3:
        {
            // Create or open the report file

            ofstream file("ascii_report.txt");


            // Check if the file was opened successfully

            if (!file)
            {
                cout << "Error opening file.\n";
                break;
            }


            // Write report title

            file << "ASCII REPORT\n";
            file << "============\n";


            // Write every character and its ASCII value

            for (i = 0; i < length; i++)
            {
                file << text[i]
                     << " = "
                     << ascii[i]
                     << endl;
            }


            // Close the file

            file.close();


            cout << "ASCII report saved successfully.\n";
            cout << "File: ascii_report.txt\n";

            break;
        }


        // ==========================================
        // Option 4
        // Read ASCII report from TXT file
        // ==========================================

        case 4:
        {
            ifstream file("ascii_report.txt");


            // Check if the file exists and opened correctly

            if (!file)
            {
                cout << "File not found.\n";
                break;
            }


            cout << "\n===== ASCII REPORT =====\n";


            // Read the file line by line

            string line;

            while (getline(file, line))
            {
                cout << line << endl;
            }


            // Close the file

            file.close();

            break;
        }


        // ==========================================
        // Option 0
        // Exit
        // ==========================================

        case 0:

            cout << "Program terminated.\n";

            break;


        // ==========================================
        // Invalid choice
        // ==========================================

        default:

            cout << "Invalid choice. Try again.\n";
        }


    } while (choice != 0);


    return 0;
}