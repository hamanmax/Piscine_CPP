#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : virtual public ISpaceMarine
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const & copy);
		TacticalMarine & operator=(TacticalMarine const & op);
		~TacticalMarine();

		ISpaceMarine * clone() const;
		void battlecry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

TacticalMarine::TacticalMarine(){
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & copy){*this = copy;}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & op){
	return *this;
}

TacticalMarine::~TacticalMarine(){
	std::cout << "Aaargh..." << std::endl;
}

void TacticalMarine::battlecry()const {
	std::cout << "For the holy PLOT!" << std::endl;
}
void TacticalMarine::rangedAttack()const {
	std::cout <<  "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack()const {
	std::cout <<  "* attacks with a chainsword *" << std::endl;
}

	ISpaceMarine * TacticalMarine::clone() const{
		return NULL;
	}
#endif