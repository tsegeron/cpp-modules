//
// Created by Grubbly Ernesto on 3/24/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.getName()), grade(src.getGrade())
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const &src)
{
	this->grade = src.getGrade();

	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());

	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat: GradeTooHighException";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat: GradeTooLowException";
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

void	Bureaucrat::incrGrade(const int &val)
{
	if (this->grade - val < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->grade -= val;
}

void	Bureaucrat::decrGrade(const int &val)
{
	if (this->grade + val > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->grade += val;
}

void	Bureaucrat::signForm(Form &str)	const
{
	str.beSigned(*this);
}

std::ostream & operator << (std::ostream & o, Bureaucrat const &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;

	return o;
}
