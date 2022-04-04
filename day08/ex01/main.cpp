//
// Created by Grubbly Ernesto on 31/03/2022.
//

# include "Span.hpp"

int main(void)	{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
//	sp.addNumber(11);
	try {
		sp.addNumber(11);
	}	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}