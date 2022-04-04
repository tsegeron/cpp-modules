//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef DOG_HPP
# define DOG_HPP

# pragma once

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : public AAnimal	{
private:
		Brain *myBrain;


public:
		Dog();
		Dog(const Dog &src);
		Dog & operator = (const Dog &src);
		virtual	~Dog();

		Brain *getBrain() const;

		virtual void	makeSound()	const;
};

#endif //DOG_HPP
