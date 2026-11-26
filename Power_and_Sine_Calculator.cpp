#include <iostream>  // Εισάγει τη βιβλιοθήκη για είσοδο και έξοδο δεδομένων.
                     // Includes the library for input and output operations.

using namespace std; // Επιτρέπει τη χρήση των ονομάτων της standard library χωρίς το πρόθεμα std::.
                     // Allows us to use standard library names without the std:: prefix.

int main()             // Κύρια συνάρτηση από την οποία ξεκινά η εκτέλεση του προγράμματος.
                       // Main function where program execution begins.
{
    int choice = 0;    // Δηλώνει την ακέραια μεταβλητή choice και την αρχικοποιεί με την τιμή 0.
                       // Declares the integer variable choice and initializes it to 0.

    cout << "1. power_calculation" << endl; // Εμφανίζει την πρώτη διαθέσιμη επιλογή.
                                             // Displays the first available option.
    cout << "2. sin_calculation" << endl;   // Εμφανίζει τη δεύτερη διαθέσιμη επιλογή.
                                             // Displays the second available option.
    cout << "Enter your choice [1, 2]: ";   // Ζητά από τον χρήστη να επιλέξει μία από τις δύο λειτουργίες.
                                             // Asks the user to select one of the two operations.
    cin >> choice;                          // Διαβάζει την επιλογή του χρήστη και την αποθηκεύει στη μεταβλητή choice.
                                             // Reads the user's choice and stores it in the choice variable.

    switch (choice) // Ελέγχει την τιμή της choice και εκτελεί το αντίστοιχο case.
                    // Checks the value of choice and executes the matching case.
    {
        case 1: // Εκτελείται όταν ο χρήστης επιλέξει 1 (υπολογισμός δύναμης).
                // Executes when the user selects 1 (power calculation).
        {
            int base, exp; // Δηλώνει τις μεταβλητές για τη βάση και τον εκθέτη.
                           // Declares the variables for the base and exponent.
            int result = 1; // Αρχικοποιεί το αποτέλεσμα με 1, την ουδέτερη τιμή του πολλαπλασιασμού.
                            // Initializes the result to 1, the identity value for multiplication.

            cout << "Input the base: "; // Ζητά από τον χρήστη να εισαγάγει τη βάση.
                                        // Asks the user to enter the base.
            cin >> base;                // Διαβάζει τη βάση.
                                        // Reads the base.

            if (base <= 0) // Ελέγχει αν η βάση είναι μηδενική ή αρνητική.
                           // Checks whether the base is zero or negative.
            {
                cout << "Base must be a positive number!" << endl; // Εμφανίζει μήνυμα λάθους.
                                                                    // Displays an error message.
            }
            else // Εκτελείται όταν η βάση είναι θετική.
                 // Executes when the base is positive.
            {
                cout << "Input the exponent: "; // Ζητά από τον χρήστη να εισαγάγει τον εκθέτη.
                                                // Asks the user to enter the exponent.
                cin >> exp;                     // Διαβάζει τον εκθέτη.
                                                // Reads the exponent.

                if (exp < 0) // Ελέγχει αν ο εκθέτης είναι αρνητικός.
                             // Checks whether the exponent is negative.
                {
                    cout << "Exponent must not be negative!" << endl; // Εμφανίζει μήνυμα λάθους.
                                                                       // Displays an error message.
                }
                else // Εκτελείται όταν ο εκθέτης είναι μηδέν ή θετικός.
                     // Executes when the exponent is zero or positive.
                {
                    for (int i = 1; i <= exp; i++) // Επαναλαμβάνει τον βρόχο exp φορές.
                                                  // Repeats the loop exp times.
                    {
                        result = result * base; // Πολλαπλασιάζει το προηγούμενο αποτέλεσμα με τη βάση.
                                                 // Multiplies the previous result by the base.
                    }

                    cout << "The result is: " << result << endl; // Εμφανίζει το τελικό αποτέλεσμα.
                                                                  // Displays the final result.
                }
            }

            break; // Τερματίζει το συγκεκριμένο case και εξέρχεται από το switch.
                   // Terminates this case and exits the switch.
        }

        case 2: // Εκτελείται όταν ο χρήστης επιλέξει 2 (υπολογισμός ημιτόνου).
                // Executes when the user selects 2 (sine calculation).
        {
            int o, h; // Δηλώνει τις μεταβλητές για την απέναντι πλευρά και την υποτείνουσα.
                      // Declares the variables for the opposite side and the hypotenuse.
            double sine; // Δηλώνει μεταβλητή τύπου double για την αποθήκευση του ημιτόνου.
                         // Declares a double variable to store the sine value.

            cout << "Enter opposite length: "; // Ζητά το μήκος της απέναντι πλευράς.
                                               // Asks for the length of the opposite side.
            cin >> o;                          // Διαβάζει το μήκος της απέναντι πλευράς.
                                               // Reads the length of the opposite side.

            cout << "Enter hypotenuse: "; // Ζητά το μήκος της υποτείνουσας.
                                         // Asks for the length of the hypotenuse.
            cin >> h;                    // Διαβάζει το μήκος της υποτείνουσας.
                                         // Reads the length of the hypotenuse.

            if (h <= 0 || o < 0 || o > h) // Ελέγχει αν οι διαστάσεις του τριγώνου είναι μη έγκυρες.
                                          // Checks whether the triangle dimensions are invalid.
            {
                cout << "Invalid triangle dimensions!" << endl; // Εμφανίζει μήνυμα λάθους.
                                                                 // Displays an error message.
            }
            else // Εκτελείται όταν οι διαστάσεις είναι αποδεκτές.
                 // Executes when the dimensions are valid.
            {
                sine = static_cast<double>(o) / h; // Μετατρέπει το o σε double πριν από τη διαίρεση, ώστε να διατηρηθεί η δεκαδική ακρίβεια.
                                                   // Converts o to double before division to preserve decimal precision.
                cout << "Sine: " << sine << endl;  // Εμφανίζει την τιμή του ημιτόνου.
                                                   // Displays the sine value.
            }

            break; // Τερματίζει το συγκεκριμένο case και εξέρχεται από το switch.
                   // Terminates this case and exits the switch.
        }

        default: // Εκτελείται όταν ο χρήστης εισαγάγει επιλογή διαφορετική από 1 ή 2.
                 // Executes when the user enters a choice other than 1 or 2.
        {
            cout << "You have only 2 choices!" << endl; // Εμφανίζει μήνυμα ότι υπάρχουν μόνο δύο επιλογές.
                                                       // Displays a message indicating that only two choices are available.
            break; // Τερματίζει το default case.
                   // Terminates the default case.
        }
    }

    return 0; // Τερματίζει επιτυχώς το πρόγραμμα.
              // Terminates the program successfully.
}