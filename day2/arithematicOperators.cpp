#include <iostream>

int main() {

    // Arithmetic operators examples

    int sum = 10;
    sum += 5;
    std::cout << "After sum += 5: " << sum << std::endl;

    int difference = 20;
    difference -= 7;
    std::cout << "After difference -= 7: " << difference << std::endl;

    int count = 0;
    count++;
    std::cout << "After count++: " << count << std::endl;

    int value = 5;
    value--;
    std::cout << "After value--: " << value << std::endl;

    int product = 3;
    product *= 4;
    std::cout << "After product *= 4: " << product << std::endl;

    int quotient = 15;
    quotient /= 3;
    std::cout << "After quotient /= 3: " << quotient << std::endl;

    int remainder = 17;
    remainder %= 5;
    std::cout << "After remainder %= 5: " << remainder << std::endl;
    
    return 0;
}
