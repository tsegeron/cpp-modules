#include "Harl.hpp"

int main(int ac, char *av[]) {

	Harl	chel;

	if (ac != 2)
		return 1;

	chel.complain(av[1]);

	return 0;
}
