/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:21:03 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 18:21:09 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

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
	this->_squad = new Lists;
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
		this->push(op.getUnit(i)->clone());
	}
	this->_size = op._size;
	
	return *this;
}

Squad::~Squad(){
	this->dellist();
}