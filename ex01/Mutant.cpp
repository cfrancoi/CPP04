#include "Mutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Mutant::Mutant()
{
	std::cout << "Gaarh ..." << std::endl;
}

Mutant::Mutant( const Mutant & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Mutant::~Mutant()
{
	std::cout << "Boargh.." << std::endl;
}

void Mutant::takeDamage(int amount) 
{
	amount *= 2;
	std::cout << getType() << " take " << amount << " Dmg" << std::endl;

	if (amount < 0)
		return;
	
	if (amount >= _hp)
	{
		_hp = 0;
	}
	else
	{
		_hp -= amount;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Mutant &				Mutant::operator=( Mutant const & rhs )
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