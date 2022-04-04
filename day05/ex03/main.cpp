//
// Created by Grubbly Ernesto on 3/24/22.
//

# include "Bureaucrat.hpp"
# include "Intern.hpp"
# define LINE std::cout << "------------------------------" << std::endl;

int main ( void ) {

	Intern someRandomIntern;
	Form* rrf;
	Bureaucrat Born("Born", 1);
	LINE
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->beSigned(Born);
	Born.executeForm(*rrf);

	delete rrf;
	LINE
	try {
		rrf = someRandomIntern.makeForm("tl;dr", "tl;dr");
		delete rrf;
	}	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	LINE
	rrf = someRandomIntern.makeForm("presidential pardon", "Terminator");
	rrf->beSigned(Born);
	Born.executeForm(*rrf);
	delete rrf;

	LINE
	rrf = someRandomIntern.makeForm("shrubbery creation", "NewTree");
	rrf->beSigned(Born);
	Born.executeForm(*rrf);
	delete rrf;
	LINE

	return (0);
}