//
// Created by Grubbly Ernesto on 3/25/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
		: Form("presidential pardon", 25, 5), target("No target")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
		: Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
		: Form(src)
{
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &src)
{
	Form::operator=(src);

	const_cast <std::string&> (this->target) = src.getTarget();
//	const_cast <std::string&> (this->name) = src.getName();
//	const_cast <int&> (this->signGrade) = src.getSignGrade();
//	const_cast <int&> (this->execGrade) = src.getExecGrade();
//	this->signStat = src.getSignStat();

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string const &	PresidentialPardonForm::getTarget() const
{
	return this->target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!this->getSignStat())
		throw PresidentialPardonForm::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw PresidentialPardonForm::GradeTooLowExecException();
	if (target.empty())
		throw PresidentialPardonForm::FilenameErrorException();
	std::cout	<< this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

Form *PresidentialPardonForm::clone(std::string const &target)
{
	Form	*retForm;
	retForm = new PresidentialPardonForm(target);
	return retForm;
}

std::ostream & operator << (std::ostream &o, PresidentialPardonForm const &src)
{
	o	<< src.getName() << "\tform >\tsigned stat: " << (src.getSignStat() ? "true, " : "false, ")
		<< "grade needed to sign: " << src.getSignGrade()
		<< ", grade needed to execute: " << src.getExecGrade() << std::endl;

	return o;
}
