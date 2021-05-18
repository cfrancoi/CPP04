#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice( const Ice & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	_xp = rhs._xp;
	_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter & user)
{
	setXp(_xp + 10);
	std::cout << "* shoots an ice bolt at " << user.getName() << " *" << std::endl;

	std::cout << "Curent xp : " << _xp << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */

