/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:21:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 17:31:51 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const Fixed &c){*this = c;}

Fixed::Fixed(/* args */){this->_nb = 0;}

Fixed::~Fixed(){}

int Fixed::getRawBits(void)const {
	return(this->_nb);
}

void Fixed::setRawBits(const int raw){
	this->_nb = raw;
}

Fixed &  Fixed::operator=(const Fixed & op)
{
	if (this != &op)
		this->_nb = op._nb;
	return *this;
}