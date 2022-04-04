//
// Created by Grubbly Ernesto on 3/29/22.
//

# include "easyfind.hpp"

# define LINE	std::cout << "----------------------------------------------" << std::endl;
#include <vector>

int main (void){

	std::vector<int> l;
	std::vector<int>::iterator it;

	l.push_back(11);
	l.push_back(12);
	l.push_back(21);
	l.push_back(24);
	l.push_back(42);

	for(it = l.begin(); it != l.end(); it++)
		std::cout << *it << std::endl;

	LINE
	int	needle = 21;

	it = easyfind(l, needle);
	if (it != l.end())
		std::cout << "find " << needle << ", found = [" << *it << "]" << std::endl;

	LINE

	while(it != l.end())
	{
		std::cout << *it << std::endl;
		it++;
	}

	LINE

	it = easyfind(l, 0);

	if (it == l.end())
		std::cout << "Element not found" << std::endl;
	return 0;
}
