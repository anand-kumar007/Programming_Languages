/*
--------------------------------------------
   manipulator     |      Effects

   showpoint          Generates a decimal point character  in floating-output. 

   noshowpoint        Trailing zeros after decimal points are not printed.
                      if there are no digit after decimal point then the point is not printed.
                      (by default).

   fixed              output in a fixed point notation.

   scientific         output in a scientific notation.

---------------------------------------------

Methods for precision

----------------------------------------
   manipulator              |  Effect

  int precision(int n)         sets the precision to n

  int precision() const        returns the used precision.

----------------------------------------  
*/

//folating point numbers are displayed to 6 precision(both after and before decimal point ) by default.

// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main()
// {
//     double x = 12.01293020;
//     cout << " By default: " << x << endl;
//     // cout.precision(5); // Precision 5
//     cout<< setprecision(9);  //this is in the iomanip headerFile
//     cout << " showpoint: " << showpoint << x << endl;
//     cout << " fixed: " << fixed << x << endl;
//     cout << " scientific: " << scientific << x << endl;

//     //Very large and very small numbers are displayed in exponential notation
//     cout<<"\n---------\n";
//     cout<<128929230.033<<endl;
//     cout<<0.0000002332<<endl;
//     return 0;
// }

/*
Manipulator      |   Effects
setw(int n)          Sets the minimum field width to n
                     
setfill(int ch)      Sets the fill character to ch
                     
left                 Left-aligns output in fields
                     
right               Right-aligns output in fields
                    
internal            Left-aligns output of the sign and
                    right-aligns output of the numeric
                    value
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 cout << '|' << setw(6) << 'X' << '|'<<endl;

 cout << fixed << setprecision(2)
      << setw(10) << 123.4 << endl
      << "1234567890" << endl;

cout<<"\n---------\n";
//  cout << fixed << setprecision(2)
//       << setw(10) <<left<< 123.4 << endl
//       << "1234567890" << endl;

  cout<<"\n..........\n";
  //default width is zero   
  cout<<cout.width()<<endl;
 cout.width(6); // or: cout << setw(6);
 cout<<12.3<<endl<<123456<<endl;

 cout << setfill('*') << setw(5) << 12;
}