#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _count(0), _contactIndex(0)	{
}

PhoneBook::~PhoneBook()	{
}


void	PhoneBook::showHeader() const {

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->_count; i++)
		this->_contacts[i].showBriefInfo();
	std::cout << "|-------------------------------------------|" << std::endl;

}

bool	PhoneBook::addContact(void)	{

	if (!this->_contacts[this->_contactIndex].setData(this->_contactIndex + 1))
	{
		std::cout << std::endl << "Contact №" << this->_contactIndex + 1 << " wasn't added" << std::endl;
		return false;
	}
	this->_contactIndex++;

	if (this->_count == 8)
		std::cout << "PhoneBook is full. The oldest contact №" << this->_contactIndex << " was replaced" << std::endl;
	else
		std::cout << "Contact №" << this->_contactIndex << " added" << std::endl;
	if (this->_count < 8)
		this->_count++;
	if (this->_contactIndex == 8)
		this->_contactIndex = 0;

	return true;
}

bool	PhoneBook::searchContact(void) const {

	size_t	index;

	if (!this->_count)
	{
		std::cout << "First add at least one Contact" << std::endl;
		return false;
	}

	this->showHeader();
	if (this->_count != 1)
	{
		std::cout << "Enter the number from 1 to " << this->_count << std::endl;

		std::cout << "The contact №";
		for(std::cin >> index; index < 1 || index > this->_count; std::cin >> index)
		{
			if (std::cin.eof())
			{
				std::cout << std::endl << "Aborted" << std::endl;
				return false;
			}
			std::cout << "PhoneBook has " << this->_count << " Contacts" << std::endl;
			std::cout << "The contact №";
			std::cin.clear();
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else
	{
		index = 1;
		std::cout << "Showing one single contact" << std::endl;
	}

	this->_contacts[index - 1].getData();

	return true;
}
