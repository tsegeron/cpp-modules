//
// Created by Grubbly Ernesto on 3/25/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
		: Form("shrubbery creation", 145, 137), target("No target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
		: Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
		: Form(src)
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &src)
{
	Form::operator=(src);

	const_cast <std::string&> (this->target) = src.getTarget();
//	const_cast <std::string&> (this->name) = src.getName();
//	const_cast <int&> (this->signGrade) = src.getSignGrade();
//	const_cast <int&> (this->execGrade) = src.getExecGrade();
//	this->signStat = src.getSignStat();

	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string const &	ShrubberyCreationForm::getTarget() const
{
	return this->target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!this->getSignStat())
		throw ShrubberyCreationForm::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw ShrubberyCreationForm::GradeTooLowExecException();
	if (target.empty())
		throw ShrubberyCreationForm::FilenameErrorException();
	std::ofstream	file;
	file.open(target + "_shrubbery", std::ios::in | std::ios::trunc);
	if (!file.is_open())
		throw ShrubberyCreationForm::FilenameOpeningException();

	std::string	tree;

	tree = 	"   *    *  ()   *   *\n"
				"*        * /\\         *\n"
				"      *   /i\\\\    *  *\n"
				"    *     o/\\\\  *      *\n"
				" *       ///\\i\\    *\n"
				"     *   /*/o\\\\  *    *\n"
				"   *    /i//\\*\\      *\n"
				"        /o/*\\\\i\\   *\n"
				"  *    //i//o\\\\\\\\     *\n"
				"    * /*////\\\\\\\\i\\*\n"
				" *    //o//i\\\\*\\\\\\   *\n"
				"   * /i///*/\\\\\\\\\\o\\   *\n"
				"  *    *   ||     * \n";
	for (int j = 0; j < 3; j++)
	{
		file << tree << std::endl;
		file << "\n";
	}
	file.close();
	std::cout << executor.getName() << " draw an ASCII trees in " << target + "_shrubbery" << std::endl;
}

Form *ShrubberyCreationForm::clone(std::string const &target)
{
	Form	*retForm;
	retForm = new ShrubberyCreationForm(target);
	return retForm;
}

std::ostream & operator << (std::ostream &o, ShrubberyCreationForm const &src)
{
	o	<< src.getName() << "\tform >\tsigned stat: " << (src.getSignStat() ? "true, " : "false, ")
		 << "grade needed to sign: " << src.getSignGrade()
		 << ", grade needed to execute: " << src.getExecGrade() << std::endl;

	return o;
}
