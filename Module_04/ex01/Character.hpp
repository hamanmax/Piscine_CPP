#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character 
{
	private:
		Character();
	protected:
		std::string	_name;
		int			_action_points;
		AWeapon		*_weapon;
		
	public:
		Character(Character const & copy);
		Character & operator=(Character const & op);
		virtual ~Character();

		Character(std::string const & name);

		void	recoverAP();
		void	equip(AWeapon*);
		void	attack(Enemy*);
		std::string virtual	getName() const;
		int		getAP() const;
		AWeapon	*getWeapon()const ;
};

std::ostream& operator<<(std::ostream & os, Character const & ch);

#endif