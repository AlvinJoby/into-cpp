#include <iostream>
#include <vector>

/* typedef creates an alias for an existing type,
 allowing for easier readability and maintenance */

typedef std::string string_t;
typedef double decimal_t;
typedef char c_t;
typedef bool b_t;

int main(){
    string_t name = "Alvin";
    decimal_t pi = 3.14159;
    c_t letter = 'A';
    b_t is_true = true;

    std::cout << name << std::endl;
    std::cout << pi << std::endl;
    std::cout << letter << std::endl;
    std::cout << is_true << std::endl;
    return 0;
}