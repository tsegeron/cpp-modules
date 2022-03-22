//
// Created by Grubbly Ernesto on 3/19/22.
//

#include "Harl.hpp"

Harl::Harl()
{
	f[0] = &Harl::debug;
	f[1] = &Harl::info;
	f[2] = &Harl::warning;
	f[3] = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup"
				 " burger. I really do!" << std::endl;
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
				 "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
				 "years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}




void	Harl::complain(std::string const &level) const
{
	int	caseNum;

	level == "DEBUG" ? caseNum = 0 :
	level == "INFO" ? caseNum = 1 :
	level == "WARNING" ? caseNum = 2 :
	level == "ERROR" ? caseNum = 3 :
			caseNum = 4;

	switch (caseNum)
	{
		case 0:	(this->*f[0])();
		case 1:	(this->*f[1])();
		case 2:	(this->*f[2])();
		case 3:	(this->*f[3])(); break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

//	if (caseNum != 4)
//		(this->*f[caseNum])();
//	else
//		std::cout << "No expression for given level" << std::endl;
}
