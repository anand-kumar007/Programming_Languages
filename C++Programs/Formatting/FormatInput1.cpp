// #include <iostream> // Declarations of cin, cout,...
// #include <iomanip>  // Manipulator setw()
// #include <string>
// using namespace std;
// int main()
// {
//     string label;
//     double price;
//     cout << "\nPlease enter an article label: ";

//     // Input the label (15 characters maximum):

//     cin >> setw(16); // or: cin.width(16); one byte is for null.
//     cin >> label;

//     cin.sync();  // Clears the buffer and resets
//     cin.clear(); // any error flags that may be set


//     cout << "\nEnter the price of the article: ";
//     cin >> price; 

//     // Controlling output:
//     cout << fixed << setprecision(2)
//          << "\nArticle:"
//          << "\n Label: " << label
//          << "\n Price: " << price << endl;
   
//     return 0;
// }

// The input buffer is cleared and error flags are reset by calling the sync() and clear() methods. 

// This ensures that the program will wait for new input for the price, even if more than 15 characters have
// been entered for the label.

// FORMATTED INPUT OF NUMBERS

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     int number = 0;
//     cout << "\nEnter a hexadecimal number: "
//          << endl;
//     cin >> hex >> number; // Input hex-number

//     cout << "Your decimal input: " << number << endl;


//     // If an invalid input occurred:
//     cin.sync();  // Clears the buffer
//     cin.clear(); // Reset error flags


//     double x1 = 0.0, x2 = 0.0;
//     cout << "\nNow enter two floating-point values: "
//          << endl;

//     cout << "1. number: ";
//     cin >> x1; // Read first number
//     cout << "2. number: ";
//     cin >> x2; // Read second number

//     cout << fixed << setprecision(2)
//          << "\nThe sum of both numbers: "
//          << setw(10) << x1 + x2 << endl;
//     cout << "\nThe product of both numbers: "
//          << setw(10) << x1 * x2 << endl;
//     return 0;
// }


//input erros what if the type of input entered doesn't match with the asked input.

#include<iostream>
using namespace std;

int main()
{
    int i ,j;
    cout<<"enter two values: ";
    cin>>i>>j;  //give 1A3 as input

    cout<<i<<" "<<j<<endl;

    
}

// Given input of 1A5 the digit 1 will be stored in the variable i. The next input field
// begins with A.But since a decimal input type is required, the input sequence will not be processed beyond the letter A.If, as in our example, no type conversion is performed, the variable is not written to and an internal error flag is raised.

// It normally makes more sense to read numerical values individually, and clear the input buffer and any error flags that may have been set after each entry.

//  cin.sync();  Clears the buffer
//  cin.clear(); Reset error flags