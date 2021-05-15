#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

typedef struct	s_unit
{
	ISpaceMarine	*el;
	struct s_unit	*next;
}			 	t_unit;


class Squad : public ISquad
{

	public:

		Squad();
		Squad( Squad const & src );
		~Squad();

		int				getCount() const;
		ISpaceMarine	*getUnit(int nu) const;
		int				push(ISpaceMarine *add);

		Squad &		operator=( Squad const & rhs );

	private:
		int				_count;
		t_unit*			_units;

};

#endif /* *********************************************************** SQUAD_H */