//
// Created by Grubbly Ernesto on 3/23/22.
//

# include "Character.hpp"
# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}
