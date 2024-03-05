/* Primitive types
C++ has several "primitive" variable types, which are things like ints (integers), strings, floats, and others. These should be similar to variable types in other programming languages you have used.
*/

#include <iostream>
#include <string>

using std::cout;
using std::string;

int main() {
    
    int a = 100;                    // Declaring and initializing (assigning a value) an int variable.
    string b = "Here is a string";  // Declaring and initializing a string variable.
    
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
}

