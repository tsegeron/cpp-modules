#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	book;
	std::string	cmd;
	std::string	prompt;

	prompt = "-> ";
	for(std::cout << prompt, std::getline(std::cin, cmd); !std::cin.eof(); std::getline(std::cin, cmd))
	{
		if (cmd == "ADD")
		{
			if (!book.addContact())
				break;
		}
		else if (cmd == "SEARCH")
		{
			if (!book.searchContact())
				break;
		}
		else if (cmd == "EXIT")
			break;
		std::cout << prompt;
	}

	return 0;
}
