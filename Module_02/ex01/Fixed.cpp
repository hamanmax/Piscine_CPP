/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:21:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/18 18:05:13 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(const Fixed &c){*this = c;}

Fixed::Fixed(/* args */){nb = 0;}

Fixed::Fixed(const float fl)
{
	float nbr = (fl);

	nb = nbr;
	nb = (float)(nbr * (float)(1 << Fixed::i));
}

Fixed::Fixed(const int nbr)
{
	nb = nbr << i;
	}
Fixed::~Fixed(){}

int Fixed::toInt()const {
		float f;
		f = roundf(toFloat());
	return((int)f);
}

// float Fixed::toFloat(void) const {
// 	int nbr = nb;
// 	float nbrrr;
// 	nbr = nbr / 1 << 8;
// 	nbrrr = (float)nbr;
// 	return(nbrrr);
// }

float       Fixed::toFloat(void) const
{
    return ((float)(nb / (float)(1 << Fixed::i)));
}

int Fixed::getRawBits(void)const {
	return(nb);
}

void Fixed::setRawBits(const int raw){
	nb = raw;
}