/*Exercise 4 - Generate even list number.
*Very given input are not null.
* Programmer - Taih Trann
*/

#include <iostream>

unsigned int check_num(int a) //check input for NULL
{
	while (a == NULL)
	{
		std::cout << "Please provide a not null value: " << std::endl;
		std::cin >> a;
	}
	return a;
}

void even_list(int a, int b)
{
	int count = 0;
	std::cout << "Even list between " << a << " and " << b << " is: ";
	while (a <= b)
	{
		if (a % 2 == 0)
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
}

int main()
{
	unsigned int start_num;
	unsigned int final_num;

	std::cout << "Please enter a start number: " << std::endl;
	std::cin >> start_num;
	start_num = check_num(start_num);
	
	std::cout << "Please enter a final number: " << std::endl;
	std::cin >> final_num;
	final_num = check_num(final_num);

	even_list(start_num, final_num);

	std::cin.get();
}