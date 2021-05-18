#ifndef MUTANT_HPP
# define MUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class Mutant : public Enemy
{

	public:

		Mutant();
		Mutant( Mutant const & src );
		virtual			~Mutant();

		virtual void	takeDamage(int amount);
		Mutant &		operator=( Mutant const & rhs );

	private:

};

#endif /* ********************************************************** MUTANT_H */