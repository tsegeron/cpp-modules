//
// Created by Grubbly Ernesto on 3/26/22.
//

# include "Conversion.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "1 argument needed, format: 'a', 42, 4.2f, 4.2" << std::endl;
		return (1);
	}

	Conversion::PrintConverted(av[1]);

	return 0;
}
