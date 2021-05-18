#ifndef EVISCERATOR_HPP
# define EVISCERATOR_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class Eviscerator : public AWeapon
{

	public:

		Eviscerator();
		Eviscerator( Eviscerator const & src );
		virtual ~Eviscerator();

		virtual void 	attack() const;

		Eviscerator &		operator=( Eviscerator const & rhs );

	private:

};

#endif /* ***************************************************** EVISCERATOR_H */