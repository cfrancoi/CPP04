#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{

	public:
		
		Peon( Peon const & src );
		Peon(std::string const &name);
		virtual ~Peon();

		Peon &		operator=( Peon const & rhs );

		virtual void		getPolymorphed(void) const;
	private:
		Peon();

};

#endif /* ************************************************************ PEON_H */