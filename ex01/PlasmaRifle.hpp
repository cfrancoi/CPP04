#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

	public:

		PlasmaRifle();
		PlasmaRifle( PlasmaRifle const & src );
		virtual ~PlasmaRifle();

		virtual void 	attack() const;

		PlasmaRifle &		operator=( PlasmaRifle const & rhs );

	private:

};

#endif /* ***************************************************** PLASMARIFLE_H */