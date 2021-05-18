#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	int i = 0;
	while (i < _inv_len)
	{
		_inv[i] = NULL;
		i++;
	}
}

Character::Character(std::string const & name) : _name(name)
{
	int i = 0;
	while (i < _inv_len)
	{
		_inv[i] = NULL;
		i++;
	}
}



Character::Character( const Character & src )
{
	int i = 0;
	while (i < _inv_len)
	{
		if (src._inv[i] != NULL)
			_inv[i] = src._inv[i]->clone();
		else
			_inv[i] = 0;
		i++;
	}
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	int i = 0;
	while (i < _inv_len)
	{
		if (_inv[i] != NULL)
		{
			delete _inv[i];
		}
		i++;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	_name = rhs._name;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m) 
{
	int i;

	i = 0;

	if (m == NULL)
		return;

	while (i < _inv_len)
	{
		if (_inv[i] == NULL)
		{
			_inv[i] = m;
			return;
		}
		i++;
	}
}

void Character::unequip(int index) 
{
	if (index >= _inv_len || index < 0)
		return;
	_inv[index] = NULL;
}

void Character::use(int index, ICharacter& target) 
{
	if (index >= _inv_len || index < 0)
	{
		std::cerr <<  "inexistant inventory slot" << std::endl; 
		return;
	}
	if (_inv[index] == NULL)
	{
		std::cerr << "empty slot" << std::endl;
		return;
	}
	_inv[index]->use(target);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
