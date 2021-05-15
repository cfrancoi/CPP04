#include "AMateria.hpp"
#include "ICharacter.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{
	
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	std::cout << _type << " materia was detroy" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	_xp = rhs._xp;
	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::setXp(uint value) 
{
	_xp = value;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */