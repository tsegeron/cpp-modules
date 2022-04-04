//
// Created by Grubbly Ernesto on 3/25/22.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form	{
private:
		std::string const	target;


public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm & operator = (ShrubberyCreationForm const &src);
		virtual ~ShrubberyCreationForm();

		std::string const &	getTarget()	const;
		void	execute(Bureaucrat const &executor) const;

		virtual Form *clone(std::string const &target);
};

std::ostream & operator << (std::ostream &o, ShrubberyCreationForm const &src);

#endif //SHRUBBERYCREATIONFORM_HPP
