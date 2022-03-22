#include <iostream>
#include <string>
#include <string>

#include "StrReplacer.hpp"

int main(int ac, char *av[])
{
	if (ac == 4)
	{
		try
		{
			StrReplacer::replace(av[1], av[2], av[3]);
		}
		catch (const char *msg)
		{
			std::cerr << "Error: " << msg << std::endl;
			return 1;
		}
	}
	else
	{
		std::cout << "Expected 3 arguments to be given" << std::endl;
		return 2;
	}

	return 0;
}
