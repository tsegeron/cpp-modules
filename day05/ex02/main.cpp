//
// Created by Grubbly Ernesto on 3/24/22.
//

# include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat				Dude("Dude", 100);
		ShrubberyCreationForm	Shrub("Genom");
		RobotomyRequestForm		Robot("Evalution");
		PresidentialPardonForm	Presi("Entity");

		std::cout << Dude << std::endl;
		std::cout << Shrub;
		std::cout << Robot;
		std::cout << Presi << std::endl;

		std::cout << Dude;
		Dude.signForm(Shrub);
		std::cout << Shrub;
		Dude.executeForm(Shrub);
		std::cout << std::endl;

		std::cout << Dude;
		Dude.incrGrade(30);
		std::cout << Dude;
		Dude.signForm(Robot);
		std::cout << Robot;
		Dude.incrGrade(30);
		std::cout << Dude;
		Dude.executeForm(Robot);
		std::cout << std::endl;

		std::cout << Dude;
		Dude.incrGrade(30); //
		std::cout << Dude;
		Dude.signForm(Presi);
		std::cout << Presi;
		Dude.incrGrade(5); //
		std::cout << Dude;
		Dude.executeForm(Presi);
		std::cout << std::endl;

		std::cout << Dude;
		std::cout << Shrub;
		std::cout << Robot;
		std::cout << Presi << std::endl;

		{
			Bureaucrat	Other("Asta", 12);
			std::cout << Other;
			std::cout << Dude;
			Other = Dude;
			std::cout << "Other = Dude ==> " << Other;
		}
		{
			std::cout << std::endl << Dude << "Other(Dude) ==> ";
			Bureaucrat	Other(Dude);
			std::cout << Other;
		}

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
