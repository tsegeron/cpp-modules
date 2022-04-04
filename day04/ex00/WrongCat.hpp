//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal	{
public:
	WrongCat();
	WrongCat(const WrongCat &src);
	WrongCat & operator = (const WrongCat &src);
	virtual	~WrongCat();

	void	makeSound()	const;
};

#endif //WRONGCAT_HPP
