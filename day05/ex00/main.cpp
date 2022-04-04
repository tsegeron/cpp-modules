//
// Created by Grubbly Ernesto on 3/24/22.
//

# include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
//		Bureaucrat	dude1("DUDE", -1);
		Bureaucrat	dude2("Steve", 21);
		Bureaucrat	dude3("Aoki", 42);
//		Bureaucrat	dude4("DUDE", 151);
		std::cout << dude2;
		std::cout << dude3;

//		dude2.incrGrade(30);
//		dude3.decrGrade(110);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
