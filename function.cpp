#include <iostream>
using namespace std;

int Check_num(int a)
{
	while (a <= 0)
	{
		std::cout << "Please enter a valid number: ";
		std::cin >> a;
	}
	return a;
}

int print_pattern_first(int n, int c, char p)
{
	if (n == 0)
	{
		return 1;
	}
	if (c >= 2)
	{
		cout << c-1;
		if (n > 1) //to stop printing extra operand at the end of N
		{
			cout << " " << p << " ";
		}
	}
	else
	{
		cout << c << " " << p << " ";

	}

	return print_pattern_first(n - 1, c + 3, p);
}

int print_pattern_second(int n, int c, char p)
{
	if (n < 0)
	{
		return 1;
	}

	if (c >= 2)
	{
		cout << c - 1 << "/" << c;
		if (n >= 1)
		{
			cout << " " << p << " ";
		}
	}
	else
	{
		cout << c << " " << p << " ";
	}

	print_pattern_second(n - 1, c + 1, p);
}

int print_pattern_last(int n, int c, char p)
{

	if (n == 0)
	{
		return 1;
	}
	if (c >= 2)
	{
		cout << (c / c) << "/" << c;
		if (n > 1)
		{
			cout << " " << p << " ";
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
		cout << c << " " << p << " ";
		if (p == '+')
		{
			p = '-';
		}
		else if (p == '-')
		{
			p = '+';
		}
	}

	return print_pattern_last(n - 1, c + 1, p);
}