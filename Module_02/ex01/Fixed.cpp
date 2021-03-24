/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:21:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/24 10:28:19 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(/* args */){this->_nb = 0;}

Fixed::Fixed(const Fixed &c){*this = c;}

Fixed::~Fixed(){}

Fixed & Fixed::operator=(Fixed const & op)
{
	if (this != &op)
		this->_nb = op._nb;
	return *this;
}

Fixed::Fixed(const float fl)
{
	float nbr = fl;
	this->_nb = nbr;
	for( int inc = 0; inc < this->_i;inc++)
	nbr *= 2;
	this->_nb = nbr;
}

Fixed::Fixed(const int nbr)
{
	this->_nb = nbr << this->_i;
}

int Fixed::toInt()const 
{
	int ret = roundf(toFloat());
	return(ret);
}

std::ostream& operator<<(std::ostream& os, const Fixed& dt)
{
	os << dt.toFloat();
	return os;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_nb / (float)(1 << this->_i)));
}

int Fixed::getRawBits(void)const {
	return(this->_nb);
}

void Fixed::setRawBits(const int raw){
	this->_nb = raw;
}