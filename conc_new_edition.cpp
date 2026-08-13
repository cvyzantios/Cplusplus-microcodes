#include <iostream>
#include <string> // Χρήση της std::string αντί για cstring
#include <limits>

using namespace std;

int main()
{
    char input;

    do
    {
        int choice;

        cout << "\n==============================\n";
        cout << "          MAIN MENU\n";
        cout << "==============================\n";

        cout << "(1) Add numbers\n";
        cout << "(2) Concatenate strings\n";
        cout << "Choice: ";

        // Έλεγχος αν ο χρήστης έδωσε έγκυρο αριθμό
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear(); // Καθαρισμός του σφάλματος
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Αγνόηση λανθασμένων χαρακτήρων
            continue;
        }

        // Add two numbers
        if (choice == 1)
        {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Sum is: " << a + b << '\n';
        }
        // Concatenate two strings
        else if (choice == 2)
        {
            string s1, s2;

            cout << "Enter first string: ";
            cin >> s1; // Αν θέλεις κενά, χρησιμοποίησε getline(cin >> ws, s1)
            
            cout << "Enter second string: ";
            cin >> s2;

            // Απλή και ασφαλής συνένωση στη C++
            string result = s1 + s2;

            cout << "Concatenation is: " << result << '\n';
        }
        // Invalid choice
        else
        {
            cout << "Invalid choice.\n";
        }

        // Ask whether to continue
        cout << "\nPress a key and ENTER to continue or 'q' and ENTER to exit: ";
        cin >> input;

        if (input == 'q' || input == 'Q')
        {
            break;
        }

    } while (true);

    cout << "\nGoodbye!" << endl;

    return 0;
}