// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>

int main()
{
    double area;
    std::cout << "Enter the floor area, in square feet, of your home: ";
    std::cin >> area;
    double side;
    side = std::sqrt(area);
    std::cout << "That's the equivalent of a square " << side
         << " feet to the side." << std::endl;
    std::cout << "How fascinating!" << std::endl;
    return 0;
}