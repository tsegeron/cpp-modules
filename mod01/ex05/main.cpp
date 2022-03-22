#include "Harl.hpp"

int main() {

	Harl	chel;

	chel.complain("DEBUG");
	std::cout << std::endl;
	chel.complain("INFO");
	std::cout << std::endl;
	chel.complain("WARNING");
	std::cout << std::endl;
	chel.complain("ERROR");
	std::cout << std::endl;
	chel.complain("SUUUIII");
	std::cout << std::endl;

	return 0;
}
