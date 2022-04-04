//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

//# pragma once
class Character;
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter	{
private:
		AMateria	*inventory[4];
		size_t		inv_count;
		std::string	name;


public:
		Character(std::string const &name);
		Character(Character const &src);
		Character & operator = (Character const &src);
		virtual	~Character();

		std::string	const & getName()	const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

		size_t	getInvCount()	const;
};

#endif //CHARACTER_HPP
