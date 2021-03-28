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

int Squad::getCount()const {
	return(this->_size);
}

ISpaceMarine * Squad::getUnit(int N)const {
	if (N > this->_size)
		return NULL;
	Lists * node = _squad->getNode(_squad,N);
	return(node->getMarine());
}

void Squad::dellist(){
	this->_squad->del(&this->_squad);
}

int Squad::push(ISpaceMarine* SP){
	this->_squad->push(&this->_squad,SP);
	this->_size = this->_squad->get_size();
	return(this->_size);
}

Squad::Squad():_size(0){
	_squad = new Lists;
}

Squad::Squad(Squad const & copy){
	this->_squad = new Lists;
	for (int i = 0;i < copy.getCount();i++)
	{
		ISpaceMarine * tutu = copy.getUnit(i)->clone();
		this->push(tutu);
	}
	this->_size = copy._size;
}

Squad & Squad::operator=(Squad const & op){
	if (this->getCount() > 0)
		this->dellist();
	this->_squad = new Lists;
	for (int i = 0;i < op.getCount();i++)
	{
		ISpaceMarine * tutu = op.getUnit(i)->clone();
		this->push(tutu);
	}
	this->_size = op._size;
	return *this;
}

Squad::~Squad(){
	this->dellist();
}

#endif