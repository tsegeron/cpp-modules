//
// Created by Grubbly Ernesto on 3/24/22.
//

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource : public IMateriaSource	{
private:
		AMateria	*Materias[4];
		size_t		count;
public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		MateriaSource & operator = (MateriaSource const &src);
		virtual	~MateriaSource();

		void	learnMateria(AMateria *);
		AMateria * createMateria(std::string const & type);

		size_t	getCount()	const;
};

#endif //MATERIASOURCE_HPP
