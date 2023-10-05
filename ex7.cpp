#include <iostream>

int Check_num(int a) //check if the input number is valid
{
	while (a <= 0)
	{
		std::cout << "Valid input number.\nPlease enter a number: ";
		std::cin >> a;
	}
	return a;
}

int factor(int n) //calculate factorial of a fetched number
{
	if (n == 1) 
	{
		return 1;
	}
	return n * factor(n - 1);
}

int main()
{
	int number;

	std::cout << "Please enter a number: ";
	std::cin >> number;
	
	number = Check_num(number);

	std::cout << "Factor of " << number << " is " << factor(number) << "." << std::endl;

	return 0;
}