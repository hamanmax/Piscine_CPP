/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:21:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/21 18:04:12 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(/* args */){nb = 0;}

Fixed::Fixed(const Fixed &c){*this = c;}

Fixed::~Fixed(){}

Fixed & Fixed::operator=(Fixed const & op)
{
	if (this != &op)
		this->nb = op.nb;
	return *this;
}

Fixed::Fixed(const float fl)
{
	float nbr = (fl);
	this->nb = nbr;
	nbr *= 256;
	nb = nbr;
}

Fixed::Fixed(const int nbr)
{
	nb = nbr << i;
}

int Fixed::toInt()const {return(int)(roundf(toFloat()));}

std::ostream& operator<<(std::ostream& os, const Fixed& dt)
{
	os << (float)dt.toFloat();
	return os;
}

float	Fixed::toFloat(void) const
{
	return ((float)(nb / (float)(1 << Fixed::i)));
}

int Fixed::getRawBits(void)const {
	return(nb);
}

void Fixed::setRawBits(const int raw){
	nb = raw;
}