#include "PlasmaRifle.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PlasmaRifle::~PlasmaRifle()
{
}




/*
** --------------------------------- OVERLOAD ---------------------------------
*/


PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const & rhs) 
{
	_name = rhs.getName();
	_ap_cost = rhs.getApCost();
	_dmg = rhs.getDamage();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouu *" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */