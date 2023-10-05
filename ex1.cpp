#include <iostream>
#include <stdlib.h>
#include <ctime>

/// @brief 
/// @return 
int main() {
    int z;
    int a;
    int b;
    int c;
    int d;
    int x;
    int y;

    std::cout << "Enter a value: " << std::endl;
    std::cin >> a;
    std::cout << "Enter b value: " << std::endl;
    std::cin >> b;
    std::cout << "Enter c value: " << std::endl;
    std::cin >> c;
    std::cout << "Enter d value: " << std::endl;
    std::cin >> d;
    std::cout << "Enter x value: " << std::endl;
    std::cin >> x;
    std::cout << "Enter y value: " << std::endl;
    std::cin >> y;

    z = (a*x)+(b-c)*(c-d)/y;

    std::cout << z;

}