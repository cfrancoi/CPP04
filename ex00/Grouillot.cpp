#include "Grouillot.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Grouillot::Grouillot()
{
}

Grouillot::Grouillot(std::string const &name) : Victim(name)
{
	std::cout << name << " ready to serv you" << std::endl;
}


Grouillot::Grouillot( const Grouillot & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Grouillot::~Grouillot()
{
	std::cout << _name << " is dead" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Grouillot &				Grouillot::operator=( Grouillot const & rhs )
{
	this->_name = rhs.Name();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Grouillot::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a Panda!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
