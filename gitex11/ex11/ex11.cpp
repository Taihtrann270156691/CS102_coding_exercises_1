#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "function.h"

using namespace std;

int main()
{
	std::string first_name;
	std::string last_name;

	std::cout << "Please enter your first name: ";
	std::cin >> first_name;

	while (!check_name(first_name))
	{
		cout << "Please provide only letters in the name field!" << endl;
		cout << "Please enter your first name: ";
		cin >> first_name;
	}

	cout << "Please enter your last name: ";
	cin >> last_name;

	while (!check_name(last_name))
	{
		cout << "Please provide only letters in the name field!" << endl;
		cout << "Please enter your last name: ";
		cin >> last_name;
	}

	while (!check_same_name(first_name, last_name))
	{
		cout << "Please provide a different surname: ";
		cin >> last_name;
	}

	print_hello(first_name, last_name);


	std::cin.get();
}