#include "SuperMutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( const SuperMutant & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}



/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperMutant &				SuperMutant::operator=( SuperMutant const & rhs )
{
	_hp = rhs.getHp();
	_type = rhs.getType();
	return *this;
}

void SuperMutant::attack(int amount) 
{
	amount -= 3;
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
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */