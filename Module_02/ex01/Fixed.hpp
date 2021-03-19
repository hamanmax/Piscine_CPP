/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:35:37 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/19 08:48:10 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int nb;
	static const int i = 8; 
public:
		Fixed(const float fl);
		Fixed(const Fixed &c);
		Fixed(const int nbr);
		Fixed(/* args */);
		~Fixed();
	int getRawBits(void) const;
	void setRawBits(const int raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& dt);

#endif