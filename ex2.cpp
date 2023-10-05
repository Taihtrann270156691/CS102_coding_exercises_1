#include <iostream>

int main() {
    int a;
    int b;
    int c;

    std::cout << "Enter A value: " << std::endl;
    std::cin >> a;
    std::cout << "Enter B value: " << std::endl;
    std::cin >> b;
    std::cout << "Enter C value: " << std::endl;
    std::cin >> c;

    if (a < b && a < c) 
    {
        std::cout << "A is smallest." << std::endl;
    }
    else if (b < a && b < c)
    {
        std::cout << "B is smallest." << std::endl;
    }
    else if (c < a && c < b)
    {
        std::cout << "C is smallest." << std::endl;
    }
    return 0;
}