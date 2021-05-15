#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad() : _units(NULL)
{
}

Squad::Squad( const Squad & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	t_unit *ptr = _units;
	t_unit *save;

	while (ptr)
	{
		delete ptr->el;
		save = ptr->next;
		delete ptr;
		ptr = save;
	}	
}




/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=( Squad const & rhs )
{
	
	if (rhs.getCount() > 0)
	{
		t_unit *ptr;
		t_unit *to_copy;

		_units = new t_unit;
		ptr = _units;
		to_copy = rhs._units;

		while (to_copy != NULL)
		{
			ptr->el = to_copy->el->clone();
			ptr->next = NULL;
			to_copy = to_copy->next;
			if (to_copy != NULL)
			{
				ptr->next = new t_unit;
				ptr = ptr->next;
			}
		}
		this->_count = rhs.getCount();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


int Squad::push(ISpaceMarine *add) 
{
	t_unit	*el = new t_unit;
	t_unit	*ptr;

	el->el = add;
	el->next = NULL;

	if (_units == NULL)
		_units = el;
	else
	{
		ptr = _units;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = el;
	}
	_count += 1;
	return (_count);
}

ISpaceMarine* Squad::getUnit(int nu) const
{
	t_unit *ptr;
	if (nu > _count)
		return NULL;
	ptr = _units;

	while (nu)
	{
		ptr = ptr->next;
		nu--;
	}
	return ptr->el;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Squad::getCount() const
{
	return _count;
}


/* ************************************************************************** */
