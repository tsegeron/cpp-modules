//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef CAT_HPP
# define CAT_HPP

# pragma once

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal	{
private:
		Brain *myBrain;


public:
		Cat();
		Cat(const Cat &src);
		Cat & operator = (const Cat &src);
		virtual	~Cat();

		Brain *getBrain() const;

		virtual void	makeSound()	const;
};

#endif //CAT_HPP
