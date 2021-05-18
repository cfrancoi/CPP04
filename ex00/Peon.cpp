#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon()
{
	
}

Peon::Peon( const Peon & src )
{
	*this = src;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog..." << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon &				Peon::operator=( Peon const & rhs )
{
	this->_name = rhs.Name();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Peon::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */