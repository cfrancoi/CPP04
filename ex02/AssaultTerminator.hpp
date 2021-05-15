#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public:

		AssaultTerminator();
		AssaultTerminator( AssaultTerminator const & src );
		~AssaultTerminator();

		virtual ISpaceMarine *clone(void) const;
  	 	virtual void battleCry(void) const;
  		virtual void rangedAttack(void) const;
   		virtual void meleeAttack(void) const;
	
		AssaultTerminator &		operator=( AssaultTerminator const & rhs );


};

#endif /* *********************************************** ASSAULTTERMINATOR_H */