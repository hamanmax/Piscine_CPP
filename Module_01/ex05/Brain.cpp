/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:54:03 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 14:31:43 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
	address = this;
}

Brain::~Brain()
{
}

const void * Brain::identifier()const
{
	return(address);
}

int Brain::getBrainSize() const
{
	return (this->_size);
}

void Brain::setBrainSize(const int size)
{
	this->_size = size;
}

int Brain::getBrainHeight() const
{
	return (this->_height);
}

void Brain::setBrainHeight(const int height)
{
	this->_height = height;
}