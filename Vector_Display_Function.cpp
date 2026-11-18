
#include <iostream>
#include <vector>
using namespace std;

// Function prototype / Δήλωση συνάρτησης
void display(const vector<int>& num);

int main()
{
    int x;

    // User input / Είσοδος χρήστη
    cout << "Give the size of table: ";
    cin >> x;

    // Input validation / Έλεγχος εισόδου
    if (x <= 0)
    {
        cout << "Invalid size!";
        return 1;
    }

    // Create dynamic array / Δημιουργία δυναμικού πίνακα
    vector<int> t(x);

    // Initialize array / Αρχικοποίηση πίνακα
    for (int i = 0; i < x; ++i)
        t[i] = i;

    // Function call / Κλήση συνάρτησης
    display(t);

    return 0;
}

// Function definition / Ορισμός συνάρτησης
void display(const vector<int>& num)  // Δηλώνει τη συνάρτηση display, η οποία δέχεται ένα vector ακεραίων με αναφορά (reference) και δεν επιτρέπει την τροποποίησή του.
                                      // Declares the display function, which receives an integer vector by reference and does not allow it to be modified.
{
    for (int i = 0; i < num.size(); ++i) // Επαναλαμβάνει τον βρόχο όσο το i είναι μικρότερο από το πλήθος των στοιχείων του vector.
                                         // Repeats the loop while i is less than the number of elements in the vector.

        cout << num[i] << ' '; // Εμφανίζει το στοιχείο στη θέση i και αφήνει ένα κενό μετά από αυτό.
                               // Prints the element at index i and adds a space after it.
}


/* Η size() είναι ενσωματωμένη member function της κλάσης vector.
   Επιστρέφει το πλήθος των στοιχείων του vector num.
   Δεν χρειάζεται να την ορίσουμε εμείς – παρέχεται από τη C++ Standard Library.
   The size() function is a built-in member function of the vector class.
   It returns the number of elements stored in vector num.
   We do not define it ourselves – it is provided by the C++ Standard Library. */
   

