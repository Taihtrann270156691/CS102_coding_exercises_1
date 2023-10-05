#include <iostream>
#include <algorithm>
#include <iterator>

int Check_num(int a)
{
	while (a <= 0)
	{
		std::cout << "Please enter a valid number: ";
		std::cin >> a;
	}
	return a;
}

int count_digit(int n)
{
	if (log10(n) + 1 > 4)
	{
		std::cout << "the number has too many digit to run on. Terminal now close. Good bye!!";
		return 0;
	}
	return log10(n) + 1;
}

void Print_place(int n, int d)
{
	while (d != 0)
	{
		switch (d)
		{
			case 4:
				std::cout << n / 1000 << " thousand ";
				break;
			case 3:
				std::cout << n / 100 % 10 << " hundreds ";
				break;
			case 2:
				std::cout << n / 10 % 10 << " tens ";
				break;
			case 1:
				std::cout << n % 10 << " one ";
				break;
			default:
				break;
		}
		d--;
	}
}

int main()
{
	int number;

	std::cout << "Please enter a number: ";
	std::cin >> number;

	;

	Print_place(number, count_digit(Check_num(number)));

	std::cin.get();
}