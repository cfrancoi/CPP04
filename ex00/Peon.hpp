#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{

	public:

		Peon();
		Peon( Peon const & src );
		Peon(std::string name);
		~Peon();

		Peon &		operator=( Peon const & rhs );

		void		getPolymorphed(void) const;
	private:

};

#endif /* ************************************************************ PEON_H */