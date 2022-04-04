# include <iostream>
# include <string>

int main() {

	std::string	stringORIG = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringORIG;
	std::string	&stringREF = stringORIG;

	std::cout	<< "stringORIG:	[" << &stringORIG << "]" << std::endl
				<< "stringPTR:	[" << stringPTR << "]" << std::endl
				<< "stringREF:	[" << &stringREF << "]" << std::endl << std::endl;

	std::cout	<< "stringORIG:	[" << stringORIG << "]" << std::endl
				<< "stringPTR:	[" << *stringPTR << "]" << std::endl
				<< "stringREF:	[" << stringREF << "]" << std::endl;

	return 0;
}
