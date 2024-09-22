#include <iostream>
#include <vector>


int main(){
    std::string name;
    int age;
    
    std::cout << "Whats Your Name? : ";
    std::cin >> name;

    //In-case, we need full name that contain space in middle,
    //                 we need to write-

    std::cout << "Whats Your full Name? : ";
    std::getline(std::cin >> std::ws, name);

    // std::ws is a stream manipulator that tells std::getline to ignore leading whitespace.
    // It's useful when mixing std::cin >> and std::getline, as it removes any leftover newline characters

    std::cout << "How old are you? : ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
}