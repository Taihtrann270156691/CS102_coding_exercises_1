#include <iostream>
int main() {
    int number;
    int count_factor = 0; //count factor to determine prime or not.
    int i = 1; 
    std::cout << "Please enter a number: \n";
    std::cin >> number;

    if(number == 1)
    {
        std::cout << number << " is a natural number.\n";
        return 0;
    }
    int n = number;
    while(n >= 1)
    {
        if(number%i == 0)
        {
            count_factor++;
            if(count_factor > 2) {
                std::cout << number << " is not a prime number.\n";
                return 0;
            }
        }
        
        i++;
        n--;
    }   

    std::cout << number << " is a prime number.\n";
    return 0;
}