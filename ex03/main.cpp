#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

#include "Cure.hpp"
#include "Ice.hpp"
#include <string>

int main()
{
	IMateriaSource * src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* bob = new Character("Bob");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	delete tmp;
	ICharacter *bill = new Character("bill");

	
	bob->use(0, *bill);
	bob->use(1, *bill);
	bob->use(2, *bill);
	bob->use(3, *bill);
	bob->use(4, *bill);

	bob->unequip(0);
	std::cout << "empty index inventory" << std::endl;
	bob->use(0, *bill);

	std::cout << "destroy :" << std::endl;
	delete src;
	delete bob;
	delete bill;
	return (0);
}