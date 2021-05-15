#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim()
{
}

Victim::Victim( const Victim & src )
{
	*this = src;
}

Victim::Victim(std::string const name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &				Victim::operator=( Victim const & rhs )
{
	_name = rhs.Name();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
	o << "I'm " << i.Name() << " and i like otters!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


std::string Victim::Name() const
{
	return _name;
}


/* ************************************************************************** */