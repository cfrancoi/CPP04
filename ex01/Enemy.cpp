#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy()
{
}

Enemy::Enemy( const Enemy & src )
{
	*this = src;
}

Enemy::Enemy(int hp, std::string type) : _hp(hp), _type(type)
{
	
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &				Enemy::operator=( Enemy const & rhs )
{
	_hp = rhs.getHp();
	_type = rhs.getType();

	return *this;
}

std::ostream &			operator<<( std::ostream & o, Enemy const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Enemy::takeDamage(int amount)
{
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
** --------------------------------- ACCESSOR ---------------------------------
*/

int Enemy::getHp(void) const
{
	return _hp;
}

std::string Enemy::getType(void) const
{
	return _type;
}


/* ************************************************************************** */