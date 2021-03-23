/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:21:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 17:33:14 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(/* args */){_nb = 0;}

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
	nbr *= 256;
	_nb = nbr;
}

Fixed::Fixed(const int nbr)
{
	_nb = nbr << _i;
}

int Fixed::toInt()const {return(int)(roundf(toFloat()));}

std::ostream& operator<<(std::ostream& os, const Fixed& dt)
{
	os << (float)dt.toFloat();
	return os;
}

float	Fixed::toFloat(void) const
{
	return ((float)(_nb / (float)(1 << _i)));
}

int Fixed::getRawBits(void)const {
	return(_nb);
}

void Fixed::setRawBits(const int raw){
	_nb = raw;
}