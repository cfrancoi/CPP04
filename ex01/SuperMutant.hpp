#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{

	public:

		SuperMutant();
		SuperMutant( SuperMutant const & src );
		~SuperMutant();

		virtual void		attack(int amount);
		SuperMutant &		operator=( SuperMutant const & rhs );

	private:

};

#endif /* ***************************************************** SUPERMUTANT_H */