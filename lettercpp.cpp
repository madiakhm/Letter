#include <iostream>
#include <string>
#include <unordered_map>

bool function(std::string ransomLetter, std::string paper)
{
	std::unordered_map <char, int> letterCount;

	for (char c : paper)
	{
		letterCount[c]++;
	}
	for (char c : ransomLetter)
	{
		if (letterCount[c] == 0) return false;
		letterCount[c]--;
	}
	return true;
}
int main()
{
	std::string ransomLetter, paper;
	std::cout << "Enter ransomLetter: ";
	std::cin >> ransomLetter;

	std::cout << "Enter paper: ";
	std::cin >> paper;

	if (function(ransomLetter, paper))
	{
		std::cout << "true" << "\n";
	}
	else std::cout << "false" << "\n";

	return 0;
}
