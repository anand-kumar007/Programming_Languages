//mutlitdimensional dynamic arrays

#include <iostream>
using namespace std;

int main()
{
    int rows,cols;
    cout<<"rows,cols : ";
    cin>>rows>>cols;

    int ** table = new int* [rows]; //bcz this is not ordinary array it holds pointers.

    // for each entry of rows give size = cols.

    for(int i =0 ; i<rows; i++)
    {
        table[i] = new int [cols];
    }
  // array allocation is done

   table[0][0] = 23;


















// for deallocating **table is done not first bcz others can't be accessed if it is lost at the beginiing similary the rows etc.

// so firstly the second arraya are deallocated and then ptr then the **table one.  

// hence order of deallocation is reverse the order of allocation.

    for (int i = 0; i < rows; i++)
    {
        delete[] table[i]; 
    }

    delete [] table; //delete the array to which the table pointer is pointing to.


    table = NULL;  // no need to hold the address bcz that memory now may be used by some other person.

    system("pause>0");
    return 0;
}