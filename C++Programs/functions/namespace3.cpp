#include <iostream>
using namespace std;
namespace lfc1
{
    int x = 10;
}
namespace lfc2
{
    int x = 20;
}
int main()
{
    int x = 30;
    lfc1::x;
    lfc2::x;
    cout << x;
    return 0;
}
// A.30 B.20 C.10 D.Compile Error
//     View Answer

//         Ans : A
//                   Explanation : In this program,
//     as there is lot of variable a and it is printing the value inside the block because it got the highest priority.