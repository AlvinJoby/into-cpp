#include <iostream>
#include <vector>

// 'using' keyword is better than 'typedef'
// The 'using' keyword in C++ is used to bring specific names from a namespace into the current scope.
// This can make code more readable by avoiding the need to prefix names with their namespace.


using std::cout;
using std::endl;
using text_t = std::string;
using decimal_t = double;
using c_t = char;
using b_t = bool;


int main() {
    // Example 1: We can now use 'cout' and 'endl' without 'std::'
    cout << "Hello, World!" << endl;

    text_t name = "Alvin";
    cout << name << endl;

    decimal_t price = 10.99;
    cout << price << endl;

    c_t grade = 'A';
    cout << grade << endl;

    b_t is_valid = true;
    cout << is_valid << endl;

    
    return 0;
}
