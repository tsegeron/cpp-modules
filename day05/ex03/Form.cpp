//
// Created by Grubbly Ernesto on 3/25/22.
//

#include "Form.hpp"

Form::Form(const std::string &name, const int signGrade, const int execGrade)
	: name(name), signGrade(signGrade), execGrade(execGrade), signStat(false)
{
	if (signGrade > 150 || execGrade > 150)
		throw (Form::GradeTooLowException());
	if (signGrade < 1 || execGrade < 1)
		throw (Form::GradeTooHighException());
}

Form::Form(const Form &src)
	: name(src.getName()), signGrade(src.getSignGrade()), execGrade(src.getExecGrade()), signStat(src.getExecGrade())
{
	if (signGrade > 150 || execGrade > 150)
		throw (Form::GradeTooLowException());
	if (signGrade < 1 || execGrade < 1)
		throw (Form::GradeTooHighException());
}

Form & Form::operator = (const Form &src)
{
	const_cast <std::string&> (this->name) = src.getName();
	const_cast <int&> (this->signGrade) = src.getSignGrade();
	const_cast <int&> (this->execGrade) = src.getExecGrade();
	this->signStat = src.getSignStat();

	return *this;
}

Form::~Form()
{
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form: Grade Too High To Sign";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form: Grade Too Low To Sign";
}

const char *Form::GradeTooLowExecException::what() const throw()
{
	return "Form: Grade Too Low To Exec";
}

const char *Form::FormAlreadySignedException::what() const throw()
{
	return "Form: Form Already Signed";
}

const char *Form::FormNotSignedException::what() const throw()
{
	return "Form: Form Not Signed";
}

const char *Form::FilenameErrorException::what() const throw()
{
	return "Form: Filename Error";
}

const char *Form::FilenameOpeningException::what() const throw()
{
	return "Form: File Opening Error";
}

void	Form::beSigned(Bureaucrat const &src)
{
	if (src.getGrade() <= this->signGrade)
	{
		if (this->signStat)
			throw Form::FormAlreadySignedException();
		this->signStat = true;
		std::cout << src.getName() << " signed " << this->name << " form" << std::endl;
	}
	else
	{
		std::cout << src.getName() << " couldn't sign form " << this->name
		<< " due to the low grade" << std::endl;
		throw Form::GradeTooLowException();
	}
}

std::string const & Form::getName() const
{
	return this->name;
}

bool	Form::getSignStat() const
{
	return this->signStat;
}

int const	Form::getSignGrade() const
{
	return this->signGrade;
}

int const	Form::getExecGrade() const
{
	return this->execGrade;
}

std::ostream & operator << (std::ostream &o, Form const &src)
{
	o	<< src.getName() << "\tform >\tsigned stat: " << (src.getSignStat() ? "true, " : "false, ")
		<< "grade needed to sign: " << src.getSignGrade()
		<< ", grade needed to execute: " << src.getExecGrade() << std::endl;

	return o;
}
