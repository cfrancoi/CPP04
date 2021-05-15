#include "RadScorpion.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( const RadScorpion & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RadScorpion &				RadScorpion::operator=( RadScorpion const & rhs )
{
	_hp = rhs.getHp();
	_type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */