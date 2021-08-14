#include <iostream>

int x = 20;
namespace outer
{
    int x = 10;
    namespace inner
    {
        int z = x; // this x refers to outer::x
    }
}

int main()
{
    std::cout << outer::inner::z; //prints 10
    getchar();
    return 0;
}

// namespace is needed because if a functionalities like cout is used, but not defined in the current scope computer needs to know where to check.

// Q. What should be the location of "using namespace std;" in c++ code?
// After all #inludes.

//Q. What is different between these two lines?
using namespace std;
using std::cout;

//  Using the entire namespace, using only single name from namespace.

#include <iostream>
#define killer using

killer namespace std;

int main()
{
    std::cout << "CppBuzz.com";
    return 0;
}

// will simply print CppBuzz.com