#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );

		void		learnMateria(AMateria * ptr);
		AMateria*	createMateria(std::string const & type);
	private:
		static const int	_inv_len = 4;
		AMateria*			_inv[4];
};

#endif /* *************************************************** MATERIASOURCE_H */