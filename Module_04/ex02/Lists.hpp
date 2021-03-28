#ifndef LISTS_HPP
#define LISTS_HPP
#include "ISpaceMarine.hpp"
#include <iostream>

class Lists 
{
	private:
		size_t _size;
		ISpaceMarine *_marine;
		Lists *_next;
	protected:
		/*Arg*/
	public:
		Lists();
		Lists(Lists const & copy);
		Lists & operator=(Lists const & op);
		~Lists();

		void push(Lists ** head_ref, ISpaceMarine * data);
		void del(Lists ** head_ref);
		Lists *getNode(Lists *head_ref,int nb) const;
		ISpaceMarine * getMarine();
		size_t get_size()const ;
};

Lists::Lists():_size(0),_next(NULL),_marine(NULL){}

Lists::Lists(Lists const & copy){*this = copy;}

Lists & Lists::operator=(Lists const & op){
	if (this != &op)
	{
		this->_marine = op._marine;
		this->_next = op._next;
		this->_size = op._size;
	}
	return *this;
}

Lists::~Lists(){}

ISpaceMarine * Lists::getMarine(){
	return(this->_marine);
}

size_t Lists::get_size()const {
	return(this->_size);
}

Lists * Lists::getNode(Lists *head_ref,int nb)const {

	Lists * node = head_ref;
	for (size_t i = 0; i < nb; i++)
		node = node->_next;
	return node->_next;
}

void Lists::del(Lists ** head_ref)
{
	Lists *tmp;
	Lists *ptr = *head_ref;
	while (ptr)
	{
		tmp = ptr->_next;
		delete ptr->_marine;
		delete ptr;
		ptr = tmp;
	}
}

void Lists::push(Lists ** head_ref, ISpaceMarine * data){
	Lists * new_node = new Lists();
	Lists * last = *head_ref;
	new_node->_marine = data;
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}
	while (last->_next != NULL)
	{
		last = last->_next;
		if (last->_marine == data)
		{
			delete new_node;
			return;
		}
	}
	last->_next = new_node;
	this->_size++;
	return;
}

#endif