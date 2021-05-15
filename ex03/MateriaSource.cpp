#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	int i = 0;
	while (i < _inv_len)
	{
		_inv[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	int i = 0;
	while (i < _inv_len)
	{
		if (_inv[i] != NULL)
			delete _inv[i];
		i++;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	
	int i = 0;
	while (i < _inv_len)
	{
		_inv[i] = rhs._inv[i];
		i++;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria * ptr) 
{
	
	int i = 0;
	while (i < _inv_len)
	{
		if (_inv[i] == NULL)
		{
			std::cout << ptr->getType() << " was learn" << std::endl;
			_inv[i] = ptr;
			return;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{
	int i = 0;

	
	while (i < _inv_len)
	{
		
		if (_inv[i] != NULL && _inv[i]->getType() == type)
		{
			std::cout << _inv[i]->getType() << " was create" << std::endl;
			return (_inv[i]->clone());
		}
		i++;
	}
	return NULL;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */