#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

	public:

		TacticalMarine();
		TacticalMarine( TacticalMarine const & src );
		~TacticalMarine();

		virtual ISpaceMarine *clone(void) const;
  	 	virtual void battleCry(void) const;
  		virtual void rangedAttack(void) const;
   		virtual void meleeAttack(void) const;

		TacticalMarine &		operator=( TacticalMarine const & rhs );

};

#endif /* ************************************************** TACTICALMARINE_H */