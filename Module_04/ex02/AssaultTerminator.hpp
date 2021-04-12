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
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif