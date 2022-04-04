#include "Contact.hpp"

std::string Contact::_DataNames[5] = {
		"First name",
		"Last name",
		"Nickname",
		"Phone number",
		"Darkest secret"
};

Contact::Contact()	{
	for(int i = 0; i < 4; i++)
		this->_DataSet[i] = std::string();
}

Contact::~Contact()	{
}

void	Contact::showBriefInfo() const	{

	std::cout << "|" << std::setw(10) << this->_Index << "|";
	for (int i = 0; i < 3; i++)
	{
		if (this->_DataSet[i].length() > 10)
			std::cout << this->_DataSet[i].substr(0,9) << ".|";
		else
			std::cout << std::setw(10) << this->_DataSet[i] << "|";
	}
	std::cout << std::endl;

}

bool	Contact::isNumber(const std::string &str) const {

	for(int i = 0; str[i]; i++)
		if (!std::isdigit(str[i]))
			return false;

	return true;
}

bool	Contact::setData(size_t index)	{

	this->_Index = index;
	for(int i = 0; i < 5; i++)
	{
		std::cout << this->_DataNames[i] << ": ";
		std::getline(std::cin, this->_DataSet[i]);
		if (std::cin.eof())
			return false;
		if (this->_DataSet[i].empty() && i != 3)
		{
			std::cout << "Hey, you typed nothing" << std::endl;
			i--;
			continue;
		}
		else if (i == 3 && (this->_DataSet[i].empty() || !isNumber(this->_DataSet[i])))
		{
			std::cout << "Phone number should contain numbers" << std::endl;
			i--;
			continue;
		}
	}
	return true;
}

void	Contact::getData(void) const {

	for(int i = 0; i < 4;i++)
		std::cout << this->_DataNames[i] << ": " << this->_DataSet[i] << std::endl;

}
