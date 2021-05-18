#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{

	public:

		AWeapon();
		AWeapon(std::string const &name, int ap_cost, int damage);
		AWeapon( AWeapon const & src );
		virtual ~AWeapon();



		AWeapon &		operator=( AWeapon const & rhs );

		std::string const & getName() const;
		int					getApCost() const;
		int					getDamage() const;

		virtual	void	attack() const = 0;

	protected:
		std::string		_name;
		int				_ap_cost;
		int				_dmg;


};

std::ostream &			operator<<( std::ostream & o, AWeapon const & i );

#endif /* ********************************************************* AWEAPON_H */