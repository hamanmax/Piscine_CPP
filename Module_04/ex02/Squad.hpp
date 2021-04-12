#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISquad.hpp"
#include "Lists.hpp"
#include "iostream"

class Squad : virtual public ISquad
{
	private:
		int		_size;
		Lists	*_squad;
	protected:
		/*Arg*/
	public:
		Squad();
		Squad(Squad const & copy);
		Squad & operator=(Squad const & op);
		~Squad();
		int getCount() const;
		ISpaceMarine * getUnit(int N)const ;
		int push(ISpaceMarine*);
		void dellist();
};

#endif