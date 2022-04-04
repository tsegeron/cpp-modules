//
// Created by Grubbly Ernesto on 3/25/22.
//

#ifndef FORM_HPP
# define FORM_HPP

# pragma once

# include <iostream>
# include <string>
# include <exception>
class	Form;
# include "Bureaucrat.hpp"

class	Form	{
private:
		std::string const	name;
		bool				signStat;
		int	const			signGrade;
		int	const			execGrade;

		Form();

public:
		Form(std::string const &name, int const signGrade, int const execGrade);
		Form(Form const &src);
		Form & operator = (Form const &src);
		virtual ~Form();

		class	GradeTooHighException : public	std::exception {
			const char *what() const throw();
		};
		class	GradeTooLowException : public	std::exception {
			const char *what() const throw();
		};
		class	GradeTooLowExecException : public	std::exception {
			const char *what() const throw();
		};
		class	FormAlreadySignedException : public	std::exception {
			const char *what() const throw();
		};
		class	FormNotSignedException : public	std::exception {
			const char *what() const throw();
		};
		class	FilenameErrorException : public	std::exception {
			const char *what() const throw();
		};
		class	FilenameOpeningException : public	std::exception {
			const char *what() const throw();
		};

		void	beSigned(Bureaucrat const &src);
		virtual	void	execute(Bureaucrat const &executor) const = 0;

		std::string const &	getName()	const;
		bool				getSignStat()	const;
		int const			getSignGrade()	const;
		int const			getExecGrade()	const;

		virtual Form* clone( std::string const &target) = 0;
};

std::ostream & operator << (std::ostream &o, Form const &src);

#endif //FORM_HPP
