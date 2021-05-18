#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class ICharacter;
typedef unsigned int uint;

class AMateria
{

	public:

		AMateria();
		AMateria(std::string const & type);
		AMateria( AMateria const & src );
		virtual ~AMateria();

		AMateria &		operator=( AMateria const & rhs );

		virtual AMateria* 	clone(void) const = 0;
		virtual void		use(ICharacter & user);

		std::string const & getType() const;
		uint				getXp() const;
		void				setXp(uint value);

	protected:
		uint			_xp;
		std::string		_type;

};



#endif /* ******************************************************** AMATERIA_H */