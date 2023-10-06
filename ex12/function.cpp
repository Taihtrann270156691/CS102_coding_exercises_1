#include <iostream>

using namespace std;

int count_special_char(string s)
{
	int count = 0;
	for (int i = 0; i <= s.length(); i++)
	{
		if ((s[i] >= 33 && s[i] <= 47) ||
			(s[i] >= 58 && s[i] <= 64) ||
			(s[i] >= 91 && s[i] <= 96) || 
			(s[i] >= 123 && s[i] <= 126))
		{
			count++;
		}
	}
	return count;
}

int count_word_char(string s)
{
	int count = 0;
	//string w;
	for (auto x : s)
	{
		if (x == ' ')
		{
			//cout << w << endl;
			//w = "";
			count++;
		}
		/*else
		{
			w += x;
		}*/
	}
	return count+1;
}

int count_vowels(string s)
{
	int count = 0;

	for (int i = 0; i <= s.length(); i++)
	{
		if (s[i] == 97 || s[i] == 101 ||
			s[i] == 105 || s[i] == 111 ||
			s[i] == 117 || s[i] == 65 ||
			s[i] == 69 || s[i] == 73 ||
			s[i] == 79 || s[i] == 85)
		{
			count++;
		}
	}

	return count;
}