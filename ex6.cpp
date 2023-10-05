/* A C++ programme of fibonacci sequence
*  where the number equal to the sum of the preceding two numbers.
*  Written by Taih Trann
*/
#include <iostream>

void Fibonacci(int number)
{
	int fibonacci = 1;
	int first_number = 0;
	int second_number = 1;

	std::cout << second_number;
	while (fibonacci <= number)
	{

		std::cout << ", " << fibonacci;
		first_number = second_number;
		second_number = fibonacci;


		fibonacci = first_number + second_number;

	}

}

int main()
{
	int number;
	

	std::cout << "Please input a number: " << std::endl;
	std::cin >> number;
	while (number < 0)
	{
		std::cout << "Please input a valid number: " << std::endl;
		std::cin >> number;
	}

	Fibonacci(number);

	
	std::cin.get();
}