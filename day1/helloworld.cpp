/* 22-09-2024:
     - started learning C++
     - learned:
       * some terms
       * variables
       * namespaces

    terms:

    std - standard
    cout - character output
    return 0 - 0 = no error, 1 = some error
*/

#include <iostream>


/* Namespaces - should be declared outside the main function
             and can be used to save data in variables even if they have the same name. */

namespace number1 {
    int x = 10;
}

namespace number2 {
    int x = 15;
}

int main()
{
    // Variables
    int x = 10;          // Integer
    double pi = 3.14;     // Floating-point number
    char currency = '$';  // Character
    bool single = true;   // Boolean (true/false)
    std::string fruit = "Apple";  // String (sequence of characters)

    std::cout << currency << '\n'; // Output: $

    /////////////////////////////

    //// Namespaces Example ////

    /* Method 1: Access using namespace_name::variable */
    std::cout << number1::x << '\n'; // Output: 10

    /* Method 2: Using a namespace */
    using namespace number2;
    std::cout << x << '\n'; // Output: 15 (x from namespace number2)

    // Standard namespace usage
    using namespace std;
    string name = "John";
    cout << name << '\n';  // Output: John

    return 0;
}
