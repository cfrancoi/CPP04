#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{

	protected:
		int				_hp;
		std::string		_type;

	public:

		Enemy();
		Enemy(int hp, std::string type);
		Enemy( Enemy const & src );
		virtual ~Enemy();


		virtual void	takeDamage(int amount);

		Enemy&		operator=( Enemy const & rhs );


		int				getHp(void) const;
		std::string		getType(void) const;

};

std::ostream &			operator<<( std::ostream & o, Enemy const & i );

#endif /* *********************************************************** ENEMY_H */