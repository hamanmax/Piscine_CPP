/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:21:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/18 13:35:58 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const Fixed &c){nb = c.nb;}

Fixed::Fixed(/* args */){nb = 0;}

Fixed::~Fixed(){}

int Fixed::getRawBits(void)const {
	return(nb);
}

void Fixed::setRawBits(const int raw){
	nb = raw;
}