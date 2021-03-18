/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:35:37 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/18 18:00:06 by mhaman           ###   ########lyon.fr   */
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
	friend std::ostream& operator<<(std::ostream& os, const Fixed& dt)
	{
		os << (float)dt.toFloat();
	return os;
	}

	int getRawBits(void) const;
	void setRawBits(const int raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};
#endif