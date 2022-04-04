#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Zombie	{
private:
		std::string	Name;


public:
					Zombie();
//		explicit	Zombie(std::string const &name);
		virtual		~Zombie();

		void		announce() const;
		void		giveName(const std::string &name);

};

Zombie*	zombieHorde(int N, const std::string &name);

#endif //ZOMBIE_HPP
