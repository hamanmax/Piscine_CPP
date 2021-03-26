#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISquad.hpp"
#include "Lists.hpp"

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
};

int Squad::getCount()const {
	return(this->_size);
}

ISpaceMarine * Squad::getUnit(int N)const {
	if (N > this->_size)
		return NULL;
	Lists * node = _squad->getNode(_squad,N);
	return(node->getMarine());
}

int Squad::push(ISpaceMarine* SP){
	this->_squad->push(&this->_squad,SP);
	this->_size = this->_squad->get_size();
	return(this->_size);
}

Squad::Squad():_size(0){
	_squad = new Lists;
}

Squad::Squad(Squad const & copy){*this = copy;}

Squad & Squad::operator=(Squad const & op){
	this->_size = op._size;
	this->_squad = op._squad;
	return *this;
}

Squad::~Squad(){}

#endif