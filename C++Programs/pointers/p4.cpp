// dynamic arrays using pointers

// accessing the elements of an array is very fast bcz they are stord in contagious memory locations

// but inserting the element in btwn etc is much more costly.

// with static array the size of the array has to be known beforehand but with dynamic array this need not be the case.

// delete and new helps in case for working with the dynamic arrays. 

#include <iostream>
using namespace std;

int main()
{
   int size;
   cout<<"size : ";
   cin>>size;

   int * arr = new int[size];  // like pointer = new size of intArr = userEnteredSize
   //new is used here.

   for(int i = 0; i<size; i++)
   {
       cout<<"Arrar["<<i<<"] : ";
       cin>>arr[i];

   }
    cout<<"\nelements are : ";
   for (int i = 0; i < size; i++)
   {
    //    cout << arr[i] << " ";
       cout << *(arr + i) << " ";
   }

   delete[]arr;

   arr = NULL; //good practice 

    system("pause>0");
    return 0;
}