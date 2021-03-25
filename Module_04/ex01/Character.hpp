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
		//std::string getWeaponName()const ;
		AWeapon	*getWeapon()const ;
};

std::ostream& operator<<(std::ostream & os, Character const & ch);

std::ostream& operator<<(std::ostream & os, Character const & ch)
{
	AWeapon * tutu = ch.getWeapon();
	if (ch.getWeapon() != NULL)
		os << ch.getName() << " has " << ch.getAP() << " AP and wields a " << tutu->get_name() << std::endl;
	else
		os << ch.getName() << " has " << ch.getAP() << " AP and is unarmed" << std::endl;
	return os;
}
Character::Character(Character const & copy):_name(copy._name),_action_points(copy._action_points),_weapon(NULL){*this = copy;}

Character::Character(std::string const & name):_name(name),_action_points(40),_weapon(NULL){};

Character & Character::operator=(Character const & op){
	if (this != &op)
	{
		this->_name = op._name;
		this->_weapon = op._weapon;
		this->_action_points = op._action_points;
	}
	return *this;
}

Character::~Character(){}

AWeapon *Character::getWeapon() const{
	return(_weapon);
}

std::string Character::getName() const{
	return(this->_name);
}
// std::string Character::getWeaponName() const{
// 	return(this->_weapon->get_name());
// }

int	Character::getAP() const{
	return(this->_action_points);
}

void Character::recoverAP(){
	this->_action_points += 10;
	if (this->_action_points > 40)
		this->_action_points = 40;
}


void Character::attack(Enemy *Enemy){
	if (this->_weapon != NULL)
	{
		if (this->_action_points >= _weapon->getAPCost())
		{
			this->_action_points -= _weapon->getAPCost();
			std::cout << this->_name << " attacks " << Enemy->getType() << " with a " << _weapon->get_name() << std::endl;
			_weapon->attack();
			Enemy->takeDamage(_weapon->getDamage());
			if (Enemy->getHP() <= 0)
				delete Enemy;
		}
	}
}

void Character::equip(AWeapon * Arme){_weapon = Arme;};

#endif