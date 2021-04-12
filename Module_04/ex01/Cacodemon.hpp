#ifndef Cacodemon_HPP
#define Cacodemon_HPP
#include <iostream>
#include "Enemy.hpp"

class Cacodemon: virtual public Enemy
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		Cacodemon();
		Cacodemon(Cacodemon const & copy);
		Cacodemon & operator=(Cacodemon const & op);
		virtual ~Cacodemon();

};

#endif