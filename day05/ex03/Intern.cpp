//
// Created by Grubbly Ernesto on 3/25/22.
//

#include "Intern.hpp"

Intern::Intern()
{
	this->forms[0] = new ShrubberyCreationForm();
	this->forms[1] = new RobotomyRequestForm();
	this->forms[2] = new PresidentialPardonForm();
}

Intern::Intern(Intern const &src)
{
}

Intern & Intern::operator = (const Intern &src)
{
	return *this;
}

Intern::~Intern()
{
	for (int i = 0; i < 3; i++)
		delete this->forms[i];
}

const char *Intern::InternFormNotFound::what() const throw()
{
	return "Intern: Requested Form Wasn't Found";
}

Form *Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
	int	i = 0;

	for(; i < 3; i++)
	{
		if (forms[i]->getName() == formName)
		{
			std::cout << "Intern creates " << forms[i]->getName() << std::endl;
			return (forms[i]->clone(formTarget));
		}
	}
	throw Intern::InternFormNotFound();
}
