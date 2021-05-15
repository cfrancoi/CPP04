#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer( const Sorcerer & src )
{
	*this = src;
}

Sorcerer::Sorcerer(std::string const name, std::string const title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl; 
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl; 
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	_name = rhs._name;
	_title = rhs._title;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.Name() << ", " << i.Title() << ", and i like ponies !" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Sorcerer::polymorh(Victim const &ref) const
{
	ref.getPolymorphed();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Sorcerer::Name(void) const
{
	return _name;
}

std::string Sorcerer::Title(void) const
{
	return _title;
}

/* ************************************************************************** */