//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal	{
protected:
		std::string	type;


public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal & operator = (const WrongAnimal &src);
		virtual	~WrongAnimal();
	
		std::string	getType()	const;
	
		void	makeSound() const;
};

#endif //WRONGANIMAL_HPP
