#ifndef GROUILLOT_HPP
# define GROUILLOT_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Grouillot : public Victim
{

	public:

		Grouillot (std::string const &name);
		Grouillot( Grouillot const & src );
		virtual ~Grouillot();

		Grouillot &				operator=( Grouillot const & rhs );

		virtual void			getPolymorphed(void) const;

	private:
		Grouillot();

};

#endif /* ******************************************************* GROUILLOT_H */