//
// Created by Grubbly Ernesto on 3/25/22.
//

#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm()
		: Form("robotomy request", 72, 45), target("No target")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
		: Form("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
		: Form(src)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &src)
{
	Form::operator=(src);
	const_cast <std::string&> (this->target) = src.getTarget();
//	const_cast <std::string&> (this->name) = src.getName();
//	const_cast <int&> (this->signGrade) = src.getSignGrade();
//	const_cast <int&> (this->execGrade) = src.getExecGrade();
//	this->signStat = src.getSignStat();

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string const &	RobotomyRequestForm::getTarget() const
{
	return this->target;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->getSignStat())
		throw RobotomyRequestForm::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw RobotomyRequestForm::GradeTooLowExecException();
	if (target.empty())
		throw RobotomyRequestForm::FilenameErrorException();
	std::cout	<< "Beedo boop bop beeda beep boop lop bleeda bee "
					"bop bleeda booop bopp beedlaboop boooopppppp" << std::endl;
	std::cout	<< this->getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
}

Form *RobotomyRequestForm::clone(std::string const &target)
{
	Form	*retForm;
	retForm = new RobotomyRequestForm(target);
	return retForm;
}

std::ostream & operator << (std::ostream &o, RobotomyRequestForm const &src)
{
	o	<< src.getName() << "\tform >\tsigned stat: " << (src.getSignStat() ? "true, " : "false, ")
		 << "grade needed to sign: " << src.getSignGrade()
		 << ", grade needed to execute: " << src.getExecGrade() << std::endl;

	return o;
}
