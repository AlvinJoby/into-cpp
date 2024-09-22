#include <iostream>
#include <cmath>


int main() {
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y); // returns the largest value

    z = std::min(x, y); // returns the smallest value

    z = std::pow(x, y); // returns x raised to the power of y

    z = std::sqrt(x); // returns the square root of x

    z = std::abs(x); // returns the absolute value of x

    z = std::round(x); // returns the rounded value of x

    z = std::floor(x); // returns the largest integer less than or equal to x

    z = std::ceil(x); // returns the smallest integer greater than or equal to x


    std::cout << z << std::endl;
    
    return 0;
}

