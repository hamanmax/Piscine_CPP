#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon
{
	private:
	protected:
		/*Arg*/
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const & copy);
		PlasmaRifle & operator=(PlasmaRifle const & op);
		~PlasmaRifle();

		void attack() const;
};

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle",5,21){}
 
PlasmaRifle::PlasmaRifle(PlasmaRifle const & copy):AWeapon(copy._name,copy._apcost,copy._damage){*this = copy;}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & op){
	if (this != &op)
	{
		this->_apcost = op._apcost;
		this->_damage = op._damage;
		this->_name = op._name;
	}
	return *this;
}

void PlasmaRifle::attack()const{
std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle(){}

#endif