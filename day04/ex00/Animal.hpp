//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal	{
protected:
		std::string	type;


public:
		Animal();
		Animal(const Animal &src);
		Animal & operator = (const Animal &src);
		virtual	~Animal();

		std::string	getType()	const;

		virtual void	makeSound() const;
//		void	makeSound() const;
};

#endif //ANIMAL_HPP
