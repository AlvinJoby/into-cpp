#include <iostream>
#include <cmath>


int main(){
    double x, y, z;

    std::cout << "Enter the side (x) in cm: ";
    std::cin >> x;

    std::cout << "Enter the side (y) in cm: ";
    std::cin >> y;

    z = sqrt(pow(x,2)+pow(y,2));

    std::cout << "The hypoteneus of the triangle is " << z << " cm";

    return 0;
}


