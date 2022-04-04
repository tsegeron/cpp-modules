//
// Created by Grubbly Ernesto on 3/25/22.
//

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class	Intern	{
private:
		Form	*forms[3];
public:
		Intern();
		Intern(Intern const &src);
		Intern & operator = (Intern const &src);
		virtual	~Intern();

		class	InternFormNotFound : public std::exception {
			const char *what() const throw();
		};

		Form	*makeForm(std::string const &formName, std::string const &formTarget);
};

#endif //INTERN_HPP
