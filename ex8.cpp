#include <iostream>

int Check_num(int a)
{
	while (a <= 0)
	{
		std::cout << "Please enter a valid number: ";
		std::cin >> a;
	}
	return a;
}

int print_pattern(int n, int c, char p)
{

	if (n == 0)
	{
		return 1;
	}
	if (c >= 2) 
	{
		std::cout << (c / 2) << "/" << c; 
		if (n > 1)
		{
			std::cout << " " << p << " ";
		}
		if (p == '+')
		{
			p = '-';
		}
		else if (p == '-')
		{
			
			p = '+';
		}
	}
	else
	{
		std::cout << c << " " << p << " ";
		if (p == '+')
		{
			p = '-';
		}
		else if (p == '-')
		{
			p = '+';
		}
	}
	
	

	return print_pattern(n - 1, c * 2, p);
}
int main()
{
	int number;
	int count = 1;
	char operand = '-';

	std::cout << "Please enter a number: ";
	std::cin >> number;

	Check_num(number);

	print_pattern(number, count, operand);

	std::cin.get();




}