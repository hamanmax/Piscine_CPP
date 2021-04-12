#ifndef MGALEKGOLO_HPP
#define MGALEKGOLO_HPP
#include <iostream>
#include "Enemy.hpp"


class Mgalekgolo: virtual public Enemy
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		Mgalekgolo();
		Mgalekgolo(Mgalekgolo const & copy);
		Mgalekgolo & operator=(Mgalekgolo const & op);
		~Mgalekgolo();

		void takeDamage(int damage);
};

#endif