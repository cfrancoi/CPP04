#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:

		Victim();
		Victim( Victim const & src );
		Victim(std::string const name);
		~Victim();

		virtual void			getPolymorphed(void) const;

		std::string		Name() const;

		Victim &		operator=( Victim const & rhs );

	protected:
		std::string		_name;

};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif /* ********************************************************** VICTIM_H */