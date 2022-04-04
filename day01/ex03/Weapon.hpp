//
// Created by Ural Shagiziganov on 18.03.2022.
//

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>

class	Weapon	{
private:
	std::string	Type;


public:
			Weapon();
			Weapon(std::string	const &type);
	virtual	~Weapon();

	std::string const	&getType(void) const;
	void				setType(std::string const &type);



};

#endif //WEAPON_HPP
