#include <iostream>    
// Include input/output library
// Provides cin and cout functions


#include <cstring>     
// Include C-style string library
// Provides strcmp() function for string comparison


using namespace std;   
// Allows using cout and cin without writing std::



const char *keyword[][2] =
{
// Two-dimensional array of pointers to constant strings
//
// Column 0 -> stores the keyword
// Column 1 -> stores the explanation / description
//
// const char* means the text cannot be modified

    {"for", "for(initialization;condition;increment)"},
    // First dictionary entry
    // keyword[0][0] = "for"
    // keyword[0][1] = explanation


    {"switch", "switch(value){case-list}"},
    // Second dictionary entry


    {"while", "while(condition)..."},
    // Third dictionary entry


    {"", ""}
    // Empty entry marks the end of the dictionary
};



int main()
{
    char str[80];
    // Array that stores the word entered by the user


    int i;
    // Loop counter used to search the dictionary


    char answer;
    // Stores user's choice for continuing or exiting


    bool found;
    // Boolean variable:
    // true  -> keyword was found
    // false -> keyword was not found



    do
    {
        // Main program loop
        // Repeats searching until the user chooses to stop


        cout << "Enter keyword: ";
        // Ask user to enter a keyword


        cin >> str;
        // Read keyword from keyboard



        found = false;
        // At the beginning of every search,
        // we assume that the keyword does not exist



        for(i = 0; *keyword[i][0]; i++)
        {
            // Search through the dictionary
            //
            // i starts from 0
            //
            // keyword[i][0] accesses the keyword column
            //
            // *keyword[i][0] checks if the string is not empty
            //
            // When the program reaches {"",""},
            // the loop stops


            if(!strcmp(keyword[i][0], str))
            {
                // strcmp compares two strings
                //
                // Returns 0 when strings are identical
                //
                // ! converts 0 into true
                //
                // Therefore this block runs when
                // the keyword is found



                cout << keyword[i][1] << endl;
                // Display the explanation of the keyword



                found = true;
                // Mark that the word was found



                break;
                // Exit the for loop because
                // the search is complete
            }
        }



        if(!found)
        {
            // This block executes if the keyword
            // does not exist in the dictionary


            cout << "Keyword not found. Try again.\n";
            // Inform user and repeat the search
        }


        else
        {
            // This block executes when the word was found


            cout << "Do you want to search another word? (y/n): ";
            // Ask user if another search is needed


            cin >> answer;
            // Read user's choice
        }


    }
    while(!found || answer == 'y' || answer == 'Y');
    // Continue looping when:
    //
    // 1. The word was not found
    // OR
    // 2. User wants another search



    cout << "Program finished.\n";
    // Message before exiting


    return 0;
    // End program successfully
}