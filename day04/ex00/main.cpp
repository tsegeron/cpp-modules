//
// Created by Grubbly Ernesto on 3/23/22.
//

# include "Cat.hpp"
# include "Dog.hpp"

# include "WrongCat.hpp"

int main()
{
///*
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << std::endl;

	j->makeSound();	// dog sound
	i->makeSound(); // cat sound
	meta->makeSound(); // animal sound
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
//*/

/*
	const WrongAnimal* meta = new WrongAnimal();
//	const WrongAnimal* Kitty = new WrongCat();
//	const WrongCat* Kitty = new WrongCat();
	std::cout << std::endl;

	std::cout << Kitty->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << std::endl;

	Kitty->makeSound(); // cat sound
	meta->makeSound(); // animal sound
	std::cout << std::endl;

	delete meta;
	delete Kitty;
*/
	return 0;
}
