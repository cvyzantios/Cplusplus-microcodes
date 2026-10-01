#include <iostream>
using namespace std;

int main() {
    int n[10];
    cout<<"Enter 10 numbers: ";
/*  Storing 5 number entered by user in an array using for loop. */
    for (int i = 0; i < 10; ++i) {
        cin>>n[i];
    }
    
    cout<<"First number: "<<n[0]<<endl;  // first element of an array is n[0]
  cout<<"second number: "<<n[1]<<endl;  // second element of an array is n[1]
cout<<"third  number: "<<n[2]<<endl;  // third element of an array is n[1]
cout<<"Forth number: "<<n[3]<<endl;  // Forth element of an array is n[1]
cout<<"Fifth number: "<<n[4]<<endl;  // Fifth element of an array is n[1]
cout<<"Sixth number: "<<n[5]<<endl;  // Fifth element of an array is n[1]
cout<<"Seventh number: "<<n[6]<<endl;  // Seventh element of an array is n[1]
cout<<"Eigth number: "<<n[7]<<endl;  // Eight element of an array is n[1]
cout<<"Ninth number: "<<n[8]<<endl;  // Ninth element of an array is n[1]
cout<<"Last number: "<<n[9];        // Tenth element of an array is n[SIZE_OF_ARRAY - 1]
    return 0;
}