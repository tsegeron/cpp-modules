//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal	{
public:
		Dog();
		Dog(const Dog &src);
		Dog & operator = (const Dog &src);
		virtual	~Dog();

		virtual void	makeSound()	const;
};

#endif //DOG_HPP
