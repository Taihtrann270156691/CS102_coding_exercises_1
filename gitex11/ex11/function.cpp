#include <iostream>

using namespace std;

bool check_name(string name) //check for valid name eg. only letters
{
	//string letter = "abcdefghijklmnopqrstuvwxyz";
	const char* fname_array = name.c_str();
	//const char* letter_arr = letter.c_str();

	//cout << "array of f_name: " << endl;
	for (int i = 0; i < name.length(); i++)
	{
		if (!isalpha(fname_array[i]))
		{
			return 0;
		}
	}
	return 1;
}

bool check_same_name(string f_name, string l_name)
{
	if (f_name._Equal(l_name))
	{
		return 0;
	}
	return 1;
}

void print_hello(string f_name, string l_name)
{
	cout << "Hello " << f_name << " " << l_name;
}