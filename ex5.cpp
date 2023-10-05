/*Exercise 5 - Generate odd list number between 20 and 47.
* Programmer - Taih Trann
*/

#include <iostream>


void odd_list(int a, int b)
{
	int count = 0;
	std::cout << "Odd list between " << a << " and " << b << " is: ";
	while (a <= b)
	{
		if (a % 2 != 0)
		{
			if (count == 0)
			{
				std::cout << a;
			}
			if (count > 0)
			{
				std::cout << ", " << a;
			}
			count++;
		}
		a++;
	}
    std::cout << std::endl << "Number of add between 20 to 47: " << count;
}

int main()
{
    odd_list(20, 47);
	std::cin.get();
}