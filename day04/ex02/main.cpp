//
// Created by Grubbly Ernesto on 3/23/22.
//

# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
///*
//	const AAnimal* a = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << std::endl;

//	a->makeSound();
	j->makeSound();
	i->makeSound();
	std::cout << std::endl;

//	delete a;
	delete j;	//should not create a leak
	delete i;
//*/
/*
	AAnimal* array[10];
	for(int i = 0; i < 5; i++)
		array[i] = new Dog();
	std::cout << std::endl;

	for(int i = 5; i < 10; i++)
		array[i] = new Cat();
	std::cout << std::endl;


	for(int i = 0; i < 10; i++)
 	{
		if (i == 5)
			std::cout << std::endl;
		array[i]->makeSound();
	}
	std::cout << std::endl;


	for(int i = 0; i < 10; i++)
	{
		if (i == 5)
			std::cout << std::endl;
		delete array[i];
	}
*/

	return 0;
}
