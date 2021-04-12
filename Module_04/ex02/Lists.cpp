/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lists.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:20:19 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 18:20:45 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Lists.hpp"

Lists::Lists():_size(0),_marine(NULL),_next(NULL){}

Lists::Lists(Lists const & copy):_size(copy._size),_marine(copy._marine),_next(copy._next){*this = copy;}

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
	for (int i = 0; i < nb; i++)
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