#include "Eviscerator.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Eviscerator::Eviscerator() : AWeapon("Eviscerator", 4, 25)
{
}

Eviscerator::Eviscerator( const Eviscerator & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Eviscerator::~Eviscerator()
{
}

void Eviscerator::attack() const
{
	std::cout << "* Tsing Tsing *" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Eviscerator &				Eviscerator::operator=( Eviscerator const & rhs )
{
	_name = rhs.getName();
	_ap_cost = rhs.getApCost();
	_dmg = rhs.getDamage();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */