#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( const Cure & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	_xp = rhs._xp;
	_type = rhs._type;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Cure::clone(void) const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &user) 
{
	_xp += 10;
	std::cout << "* heals " << user.getName() << "'s wounds *" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */