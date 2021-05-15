#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine Ready for battle !" << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine & src )
{
	std::cout << "Tactical Marine Ready for battle !" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh" << std::endl;
}



/*
** --------------------------------- OVERLOAD ---------------------------------
*/

TacticalMarine &				TacticalMarine::operator=( TacticalMarine const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

ISpaceMarine* TacticalMarine::clone(void) const
{
	return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry(void) const
{
	std::cout << "For The holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attack with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attack with a chainsword *" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */