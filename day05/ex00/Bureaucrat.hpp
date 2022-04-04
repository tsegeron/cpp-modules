//
// Created by Grubbly Ernesto on 3/24/22.
//

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class	Bureaucrat	{
private:
		std::string const	name;
		int					grade;

		Bureaucrat();

public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat & operator = (Bureaucrat const &src);
		virtual	~Bureaucrat();

		class	GradeTooHighException : public	std::exception {
			const char *what() const throw();
			};
		class	GradeTooLowException : public	std::exception {
			const char *what() const throw();
		};

		std::string	getName()	const;
		int			getGrade()	const;

		void		incrGrade(int const &val);
		void		decrGrade(int const &val);

};

std::ostream & operator << (std::ostream &o, Bureaucrat const &src);

#endif //BUREAUCRAT_HPP
