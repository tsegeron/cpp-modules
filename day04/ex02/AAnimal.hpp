//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal	{
protected:
		std::string	type;


public:
		AAnimal();
		AAnimal(const AAnimal &src);
		AAnimal & operator = (const AAnimal &src);
		virtual	~AAnimal();

		std::string	getType()	const;

		virtual void	makeSound() const = 0;
//		virtual void	makeSound() const;
};

#endif //ANIMAL_HPP
