#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>

class Character : public ICharacter
{

	public:

		
		Character(std::string const & name);
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		std::string const &	getName() const;
		void				equip(AMateria *m);
		void				unequip(int index);
		void				use(int index, ICharacter& target);

	private:
		Character();
		static const int	_inv_len = 4;
		std::string			_name;
		AMateria*			_inv[4];


};


#endif /* ******************************************************* CHARACTER_H */