#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{

	public:
	
		Sorcerer(std::string const name, std::string const title);
		Sorcerer( Sorcerer const & src );
		~Sorcerer();


		void			polymorh(Victim const &ref) const;

		std::string		Name(void) const;
		std::string		Title(void) const;

		Sorcerer &		operator=( Sorcerer const & rhs );


	private:
		Sorcerer();
		std::string		_name;
		std::string		_title;

};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif /* ******************************************************** SORCERER_H */