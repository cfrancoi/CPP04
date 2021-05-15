#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon()
{
}

AWeapon::AWeapon( const AWeapon & src )
{
	*this = src;
}

AWeapon::AWeapon(std::string const &name, int ap_cost, int damage) : _name(name), _ap_cost(ap_cost), _dmg(damage)
{
	
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	_name = rhs.getName();
	_ap_cost = rhs.getApCost();
	_dmg = rhs.getDamage();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AWeapon const & i )
{
	o << i.getName();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const AWeapon::getName() const
{
	return _name;
}

int AWeapon::getApCost() const
{
	return _ap_cost;
}

int AWeapon::getDamage() const
{
	return _dmg;
}


/* ************************************************************************** */