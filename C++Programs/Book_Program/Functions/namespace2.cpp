#include <iostream> // Namespace std
void message()      // Global function ::message()
{
    std::cout << "Within function ::message()\n";
}
namespace A
{
    using namespace std; // Names of std are visible here
    void message()       // Function A::message()
    {
        cout << "Within function A::message()\n";
    }
}
namespace B
{
    using std::cout;    // Declaring cout of std.
    void message(void); // Function B::message()
}
void B::message(void) // Defining B::message()
{
    cout << "Within function B::message()\n";
}
int main()
{
    using namespace std; // Names of namespace std
    using B::message;    // Function name without
    // braces!
    cout << "Testing namespaces!\n";
    cout << "\nCall of A::message()" << endl;
    A::message();
    cout << "\nCall of B::message()" << endl;
    message(); // ::message() is hidden because
    // of the using-declaration.
    cout << "\nCall of::message()" << endl;
    ::message(); // Global function
    return 0;
}

/*
You can simplify access to the elements of a namespace by means of a using declaration or
using directive.

In this case, you do not need to repeatedly quote the namespace. Just like
normal declarations, using declarations and using directives can occur at any part of
the program.
******************************************
using declaration
----------------
A using declaration makes an identifier from a namespace visible in the current scope.
Example: using myLib::calculate; // Declaration
You can then call the function calculate() from the myLib namespace.
double erg = calculate( 3.7, 5);

using directive
----------
The using directive allows you to import all the identifiers in a namespace.
Example: using namespace myLib;

This statement allows you to reference the identifiers in the myLib namespace directly.
If myLib contains an additional namespace and a using directive, this namespace is
also imported.

If identical identifiers occur in the current namespace and an imported namespace,
the using directive does not automatically result in a conflict. However, referencing an
identifier can lead to ambiguities. In this case, you should use the scope resolution operator to resolve the situation.

*/