#include <iostream>
#include <string>
#include <cstring>
#include "function.h"

using namespace std;

int main()
{
	std::string sentence;

	cout << "Pelase enter a sentence: ";
	getline(cin, sentence);

	cout << "Given sentence: " << sentence << endl;

	cout << "Special characters: " << count_special_char(sentence) << endl;

	cout << "Words: " << count_word_char(sentence) << endl;

	cout << "Vowel: " << count_vowels(sentence) << endl;

	cin.get();
}