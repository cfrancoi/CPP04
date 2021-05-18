#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{

	public:

		Character();
		Character(std::string const & name);
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		void			recoverAP();
		void			equip(AWeapon *ptr);
		void			attack(Enemy *target);

		std::string	const &	getName(void) const;
		int					getAp(void) const;
		AWeapon *			getWeapon(void) const;

	private:
		
		std::string		_name;
		int				_ap;
		AWeapon			*_weapon;

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */