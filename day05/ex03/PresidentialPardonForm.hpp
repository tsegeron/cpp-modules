//
// Created by Grubbly Ernesto on 3/25/22.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class	PresidentialPardonForm : public	Form {
private:
		std::string const	target;
	

public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm & operator = (PresidentialPardonForm const &src);
		virtual ~PresidentialPardonForm();
	
		std::string const &	getTarget()	const;
		void	execute(Bureaucrat const &executor) const;

		virtual Form *clone(std::string const &target);
};

std::ostream & operator << (std::ostream &o, PresidentialPardonForm const &src);

#endif //PRESIDENTIALPARDONFORM_HPP
