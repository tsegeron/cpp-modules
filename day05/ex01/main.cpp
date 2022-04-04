//
// Created by Grubbly Ernesto on 3/24/22.
//

# include "Bureaucrat.hpp"
# include "Form.hpp"

int	main(void)
{
	try
	{
//		Bureaucrat	dude1("DUDE", -1);
//		Bureaucrat	dude4("DUDE", 151);
		Bureaucrat	Putin("Putin", 100);
		Bureaucrat	Rumen("Rumen", 67);
		Bureaucrat	Harald("Harald", 19);
		Form		one("Monarchy", 120, 100);
		Form		two("Republic", 80, 60);
		Form		three("Democracy", 40, 20);

		std::cout << Putin;
		std::cout << Rumen;
		std::cout << Harald << std::endl;
		std::cout << one;
		std::cout << two;
		std::cout << three << std::endl;

		Putin.signForm(one);
//		Putin.signForm(two);
		std::cout << one;
		std::cout << std::endl;

		Rumen.signForm(two);
		std::cout << two;
		std::cout << std::endl;

		Harald.signForm(three);
		std::cout << three;
		std::cout << std::endl;

		Putin.incrGrade(90);
		std::cout << Putin;
		Putin.decrGrade(20);
		std::cout << Putin;
		Putin.signForm(three);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
