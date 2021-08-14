#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    unsigned int seed;
    int z1,z2,z3;

    cout<<"  ------Random Numbers  ------\n"<<endl;
    cout<<"To initialize the random generator,"<<"\n please enter an integer value : ";
    cin>>seed;

    srand(seed); 

    z1 = rand();
    z2 = rand();
    z3 = rand();

    cout<<"\nThree random numbers: "
        <<z1<<" "<<z2<<" "<<z3<<endl;

    return 0;
}

// If random numbers are generated with rand() without first calling srand(), your program will create the same sequence of numbers each time it runs.

//The rand() function is used in C/C++ to generate random numbers in the range [0, RAND_MAX).
//RAND_MAX: is a constant whose default value may vary
// between implementations but it is granted to be at least 32767.

// The srand() function sets the starting point for producing a series of pseudo-random integers. If srand() is not called, the rand() seed is set as if srand(1) were called at program start. Any other value for seed sets the generator to a different starting point.

//  // Use current time as seed for random generator
// srand(time(0));

//srand() sets the seed which is used by rand to generate “random” numbers. If you don’t call srand before your first call to rand, it’s as if you had called srand(1) to set the seed to one.

// In short, srand() — Set Seed for rand() Function.