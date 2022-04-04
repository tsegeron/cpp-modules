//
// Created by Grubbly Ernesto on 3/25/22.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class	RobotomyRequestForm	: public Form	{
private:
		std::string const	target;

		RobotomyRequestForm();

public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm & operator = (RobotomyRequestForm const &src);
		virtual ~RobotomyRequestForm();

		std::string const &	getTarget()	const;
		void	execute(Bureaucrat const &executor) const;
};

std::ostream & operator << (std::ostream &o, RobotomyRequestForm const &src);

#endif //ROBOTOMYREQUESTFORM_HPP
