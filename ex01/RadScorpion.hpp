#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{

	public:

		RadScorpion();
		RadScorpion( RadScorpion const & src );
		~RadScorpion();

		//virtual void	takeDamage(int amount);

		RadScorpion &		operator=( RadScorpion const & rhs );

	private:

};

#endif /* ***************************************************** RADSCORPION_H */