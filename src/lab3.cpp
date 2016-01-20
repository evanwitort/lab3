#include "eecs230.h"

//
// Lab 3 EXAMPLE functions
//

/* The main function, or the "entry function" of the lab3 program, simply calls the other
 * functions to run.
 */
int main() {
    double inch;
    vector <double> inches;
   while (cin>>inch && inch != 0) {
       inches.push_back(inch);
   }

    for (int i = 0; i < inches.size(); i++ ) {
        cout<< inches[i];

    }


 if (cin.fail()) {
     cout << "You must enter a number"
 }
else {
     cout<<"\nIn Feet == "<<inch*30.48 << " ft"  // if double is inputted, multiply double by conversion factor
<<'\n';
 }

    return 0; // Lets the operating system know everything ran successfully.
}

