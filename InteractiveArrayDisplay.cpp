#include <iostream>  // GR: Βιβλιοθήκη για είσοδο και έξοδο δεδομένων.
                     // EN: Library for input and output operations.

#include <vector>    // GR: Βιβλιοθήκη για δυναμικούς πίνακες (vectors).
                     // EN: Library for dynamic arrays (vectors).

using namespace std; // GR: Επιτρέπει τη χρήση στοιχείων του namespace std χωρίς το std::.
                     // EN: Allows the use of std namespace elements without std::.

// GR: Δήλωση της συνάρτησης display, η οποία δέχεται έναν ακέραιο.
// EN: Declaration of the display function, which receives an integer.
void display(int num);


int main()
{
    // GR: Δήλωση των μεταβλητών s και x.
    // EN: Declaration of variables s and x.
    int s, x;

    // GR: Ζητάμε από τον χρήστη το συνολικό μέγεθος του πίνακα.
    // EN: Ask the user to enter the total size of the array.
    cout << "Give the size of table: ";
    cin >> s;

    // GR: Ελέγχουμε αν το μέγεθος του πίνακα είναι θετικό.
    // EN: Check whether the array size is positive.
    if (s <= 0)
    {
        cout << "Invalid table size!" << endl;
        return 1; // GR: Τερματισμός λόγω μη έγκυρου μεγέθους.
                  // EN: Terminate because the size is invalid.
    }

    // GR: Ζητάμε πόσες επαναλήψεις θα πραγματοποιηθούν.
    // EN: Ask how many iterations will be performed.
    cout << "Give the number of iterations: ";
    cin >> x;

    // GR: Ελέγχουμε αν οι επαναλήψεις είναι έγκυρες.
    // GR: Δεν επιτρέπουμε αρνητική τιμή ή τιμή μεγαλύτερη από το s.
    // EN: Validate the number of iterations.
    // EN: Negative values and values greater than s are not allowed.
    if (x < 0 || x > s)
    {
        cout << "Invalid number of iterations!" << endl;
        cout << "Enter a value between 0 and " << s << "." << endl;

        return 1; // GR: Τερματισμός λόγω μη έγκυρου x.
                  // EN: Terminate because x is invalid.
    }

    // GR: Δημιουργούμε έναν δυναμικό πίνακα s ακεραίων.
    // EN: Create a dynamic array containing s integers.
    vector<int> t(s);

    // GR: Δηλώνουμε τη μεταβλητή i για τις επαναλήψεις.
    // EN: Declare variable i for the loops.
    int i;

    // GR: Αρχικοποιούμε τις πρώτες x θέσεις του πίνακα.
    // GR: Σε κάθε θέση t[i] αποθηκεύουμε την τιμή i.
    // EN: Initialize the first x positions of the array.
    // EN: Store the value i in each position t[i].
    for (i = 0; i < x; i++)
    {
        t[i] = i;
    }

    // GR: Διατρέχουμε τις ίδιες x θέσεις του πίνακα.
    // EN: Iterate through the same x positions of the array.
    for (i = 0; i < x; i++)
    {
        // GR: Καλούμε τη display και της περνάμε την τιμή t[i].
        // EN: Call display and pass the value of t[i].
        display(t[i]);
    }

    // GR: Αλλάζουμε γραμμή μετά την εμφάνιση των αριθμών.
    // EN: Print a newline after displaying the numbers.
    cout << endl;

    // GR: Επιστρέφουμε 0 για να δηλώσουμε επιτυχή ολοκλήρωση.
    // EN: Return 0 to indicate successful program completion.
    return 0;
}


// GR: Ορισμός της συνάρτησης display.
// GR: Δέχεται έναν ακέραιο μέσω της παραμέτρου num και τον εμφανίζει.
// EN: Definition of the display function.
// EN: Receives an integer through num and displays it.
void display(int num)
{
    // GR: Εμφανίζει τον αριθμό και ένα κενό μετά από αυτόν.
    // EN: Displays the number followed by a space.
    cout << num << " ";
}


/*
======================================================================
REPORT - ARRAY SIZE, ITERATIONS AND FUNCTION CALLS IN C++
======================================================================

1. GR - ΣΚΟΠΟΣ ΤΟΥ ΠΡΟΓΡΑΜΜΑΤΟΣ
----------------------------------------------------------------------
Το πρόγραμμα επιτρέπει στον χρήστη να καθορίσει:

    s = το συνολικό μέγεθος του πίνακα.
    x = πόσες θέσεις του πίνακα θα χρησιμοποιηθούν.

Στη συνέχεια δημιουργεί έναν πίνακα ακεραίων, αποθηκεύει τιμές στις
πρώτες x θέσεις και εμφανίζει αυτές τις τιμές μέσω της συνάρτησης
display().

EN - PROGRAM PURPOSE
----------------------------------------------------------------------
The program allows the user to specify:

    s = the total size of the array.
    x = how many array positions will be used.

It then creates an integer array, stores values in the first x
positions, and displays those values through the display() function.


2. GR - ΜΕΤΑΒΛΗΤΕΣ s ΚΑΙ x
----------------------------------------------------------------------
Η μεταβλητή s καθορίζει το συνολικό μέγεθος του πίνακα.

Η μεταβλητή x καθορίζει πόσες επαναλήψεις θα εκτελεστούν και πόσα
στοιχεία θα αρχικοποιηθούν και θα εμφανιστούν.

Παράδειγμα:

    s = 8
    x = 5

Ο πίνακας έχει 8 θέσεις, αλλά το πρόγραμμα χρησιμοποιεί τις πρώτες
5 θέσεις.

EN - VARIABLES s AND x
----------------------------------------------------------------------
The variable s determines the total array size.

The variable x determines how many iterations will be performed and
how many elements will be initialized and displayed.

Example:

    s = 8
    x = 5

The array has 8 positions, but the program uses the first 5.


3. GR - ΔΗΜΙΟΥΡΓΙΑ ΤΟΥ ΠΙΝΑΚΑ
----------------------------------------------------------------------
Η εντολή:

    vector<int> t(s);

δημιουργεί έναν δυναμικό πίνακα s ακεραίων.

Το μέγεθος καθορίζεται από την τιμή που έδωσε ο χρήστης.

Οι θέσεις του πίνακα ξεκινούν από το 0 και φτάνουν μέχρι το s - 1.

Παράδειγμα για s = 5:

    t[0]
    t[1]
    t[2]
    t[3]
    t[4]

Το vector χρησιμοποιείται αντί για int t[s], επειδή το vector
υποστηρίζει κανονικά μέγεθος που καθορίζεται κατά την εκτέλεση
σε standard C++.

EN - ARRAY CREATION
----------------------------------------------------------------------
The statement:

    vector<int> t(s);

creates a dynamic array containing s integers.

Its size is determined by the value entered by the user.

Array positions start at 0 and end at s - 1.

For s = 5, the valid positions are t[0] through t[4].

A vector is used instead of int t[s] because standard C++ supports
vectors whose size is determined at runtime.


4. GR - ΕΛΕΓΧΟΣ ΕΓΚΥΡΟΤΗΤΑΣ
----------------------------------------------------------------------
Πριν χρησιμοποιήσουμε τον πίνακα, ελέγχουμε αν:

    s > 0

Στη συνέχεια ελέγχουμε αν:

    0 <= x <= s

Ο έλεγχος είναι σημαντικός επειδή δεν επιτρέπεται να προσπελάσουμε
θέσεις έξω από τα όρια του πίνακα.

Αν s = 5 και x = 8, το πρόγραμμα θα επιχειρούσε να χρησιμοποιήσει
τις θέσεις t[5], t[6] και t[7], οι οποίες δεν υπάρχουν.

Με τον έλεγχο:

    if (x < 0 || x > s)

αποτρέπουμε αυτή την περίπτωση.

EN - INPUT VALIDATION
----------------------------------------------------------------------
Before using the array, we check that:

    s > 0

We then validate:

    0 <= x <= s

This is important because accessing positions outside the array
bounds is invalid.

If s = 5 and x = 8, the program would attempt to access t[5],
t[6] and t[7], which are outside the array.

The condition:

    if (x < 0 || x > s)

prevents this situation.


5. GR - ΑΡΧΙΚΟΠΟΙΗΣΗ ΤΟΥ ΠΙΝΑΚΑ
----------------------------------------------------------------------
Η εντολή:

    for (i = 0; i < x; i++)
    {
        t[i] = i;
    }

επαναλαμβάνεται όσο το i είναι μικρότερο από το x.

Σε κάθε επανάληψη, η τιμή του i αποθηκεύεται στη θέση t[i].

Για x = 5:

    t[0] = 0
    t[1] = 1
    t[2] = 2
    t[3] = 3
    t[4] = 4

Η συνθήκη i < x σημαίνει ότι η τελευταία τιμή του i που
χρησιμοποιείται είναι x - 1.

EN - ARRAY INITIALIZATION
----------------------------------------------------------------------
The loop:

    for (i = 0; i < x; i++)
    {
        t[i] = i;
    }

continues while i is less than x.

During each iteration, the value of i is stored in t[i].

For x = 5, the first five positions contain the values 0, 1, 2, 3
and 4.

The condition i < x means that the last value used for i is x - 1.


6. GR - ΚΛΗΣΗ ΤΗΣ display()
----------------------------------------------------------------------
Η δεύτερη επανάληψη:

    for (i = 0; i < x; i++)
    {
        display(t[i]);
    }

διατρέχει τις πρώτες x θέσεις και καλεί τη συνάρτηση display().

Η έκφραση:

    display(t[i]);

περνά την τιμή του στοιχείου t[i] στη συνάρτηση.

Η παράμετρος num λαμβάνει αντίγραφο αυτής της ακέραιας τιμής.

EN - CALLING display()
----------------------------------------------------------------------
The second loop iterates through the first x positions and calls
display().

The expression:

    display(t[i]);

passes the value of t[i] to the function.

The parameter num receives a copy of that integer value.


7. GR - ΛΕΙΤΟΥΡΓΙΑ ΤΗΣ display()
----------------------------------------------------------------------
Η συνάρτηση:

    void display(int num)

δέχεται έναν ακέραιο και τον εμφανίζει μέσω της cout.

Ο τύπος επιστροφής void σημαίνει ότι η συνάρτηση δεν επιστρέφει
κάποια τιμή στο σημείο από όπου κλήθηκε.

Η εντολή:

    cout << num << " ";

εμφανίζει τον αριθμό και ένα κενό.

EN - HOW display() WORKS
----------------------------------------------------------------------
The function:

    void display(int num)

receives an integer and displays it using cout.

The return type void means that the function does not return a value
to the calling code.

The statement:

    cout << num << " ";

prints the number followed by a space.


8. GR - ΠΑΡΑΔΕΙΓΜΑ ΕΚΤΕΛΕΣΗΣ
----------------------------------------------------------------------
Είσοδος:

    Give the size of table: 8
    Give the number of iterations: 5

Έξοδος:

    0 1 2 3 4

Ο πίνακας περιέχει 8 θέσεις, αλλά χρησιμοποιούνται μόνο οι πρώτες 5.

EN - EXECUTION EXAMPLE
----------------------------------------------------------------------
Input:

    Give the size of table: 8
    Give the number of iterations: 5

Output:

    0 1 2 3 4

The array contains 8 positions, but only the first 5 are used.


9. GR - ΣΥΜΠΕΡΑΣΜΑ
----------------------------------------------------------------------
Το πρόγραμμα παρουσιάζει βασικές έννοιες της C++:

    - Μεταβλητές και είσοδο από τον χρήστη.
    - Δυναμικούς πίνακες μέσω vector.
    - Επανάληψη με for.
    - Αρχικοποίηση στοιχείων πίνακα.
    - Έλεγχο εγκυρότητας εισόδου.
    - Κλήση συναρτήσεων με παραμέτρους.
    - Εμφάνιση δεδομένων μέσω cout.

Η βασική διάκριση είναι:

    s = συνολικός αριθμός θέσεων του πίνακα.
    x = αριθμός θέσεων που θα επεξεργαστούμε.

EN - CONCLUSION
----------------------------------------------------------------------
The program demonstrates fundamental C++ concepts:

    - Variables and user input.
    - Dynamic arrays using vector.
    - for loops.
    - Array element initialization.
    - Input validation.
    - Function calls with parameters.
    - Output using cout.

The key distinction is:

    s = total number of array positions.
    x = number of positions to process.

======================================================================
END OF REPORT
======================================================================
*/