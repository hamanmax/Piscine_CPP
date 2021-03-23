/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:35:37 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/21 17:59:13 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int nb;
	static const int i = 8; 
public:
	Fixed();
	Fixed(const Fixed &c);
	Fixed & operator=(const Fixed & op);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(const int raw);
};
#endif