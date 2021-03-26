#ifndef ASSAULTTERMINTAOR_HPP
#define ASSAULTTERMINTAOR_HPP
#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : virtual public ISpaceMarine
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const & copy);
		AssaultTerminator & operator=(AssaultTerminator const & op);
		~AssaultTerminator();

		ISpaceMarine * clone() const;
		void battlecry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

AssaultTerminator::AssaultTerminator(){
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & copy){*this = copy;}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & op){
	return *this;
}

AssaultTerminator::~AssaultTerminator(){
	std::cout << "I'll be back..." << std::endl;
}

void AssaultTerminator::battlecry()const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}
void AssaultTerminator::rangedAttack()const {
	std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack()const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
ISpaceMarine * AssaultTerminator::clone() const{
	return NULL;
}
#endif