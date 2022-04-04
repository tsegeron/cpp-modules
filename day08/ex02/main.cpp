//
// Created by Grubbly Ernesto on 31/03/2022.
//

# define LINE	std::cout << "----------------------------------------------" << std::endl;

# include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "last elem " << mstack.top() << std::endl; // смотрим последний элемент стека
	LINE

	mstack.pop();	// удаляем последний элемент стека
	std::cout << "stack size " << mstack.size() << std::endl;	// смотрим кол-во элементов стека
	LINE

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	for(MutantStack<int>::iterator it1 = it; it1 != ite; it1++)
		std::cout << *it1 << std::endl;
	LINE

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	for(MutantStack<int>::reverse_iterator it1 = rit; it1 != rite; it1++)
		std::cout << *it1 << std::endl;
	LINE

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	return 0;
}