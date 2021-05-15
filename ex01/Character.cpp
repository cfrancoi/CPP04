#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
}

Character::Character( const Character & src )
{
	*this = src;
}

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL)
{
	
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	_name = rhs._name;
	_ap = rhs._ap;
	_weapon = rhs._weapon;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	if (i.getWeapon() != NULL)
		o << i.getName() << " has " << i.getAp() << " AP and wields a " << i.getWeapon()->getName() << std::endl;
	else
		o << i.getName() << " has " << i.getAp() << " AP and is unarmed" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


void Character::attack(Enemy *target) 
{
	if (_weapon == NULL)
	{
		std::cout << _name << " is unarmed" << std::endl;
		return;
	}
	if (_ap < _weapon->getApCost())
	{
		std::cout << _name << " need more ap" << std::endl;
		return;
	}
	std::cout << _name << " attacks " << target->getType() << " with a " << _weapon->getName() <<  std::endl;
	_weapon->attack();
	target->takeDamage(_weapon->getDamage());
	_ap -= _weapon->getApCost();

	if (target->getHp() == 0)
		delete target;
}


void Character::equip(AWeapon *ptr) 
{
	_weapon = ptr;
}

void Character::recoverAP() 
{
	
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
	std::cout << _name << " recover 10 AP" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Character::getName(void) const
{
	return _name;
}

int Character::getAp(void) const
{
	return _ap;
}

AWeapon * Character::getWeapon(void) const
{
	return _weapon;
}

/* ************************************************************************** */