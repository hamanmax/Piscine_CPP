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
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif