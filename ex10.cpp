#include <iostream>
#include "function.h"

using namespace std;


int main()
{
	int number;

	std::cout << "Please enter a number: ";
	std::cin >> number;

	Check_num(number);

	print_pattern_first(number, 1, '+');
	cout << endl;

	print_pattern_second(number, 1, '+');
	cout << endl;

	print_pattern_last(number, 1, '+');
	cout << endl;

	std::cin.get();
}