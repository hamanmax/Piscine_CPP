/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigFuckingGun9000.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:13:30 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:15:18 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGFUCKINGGUN9000_HPP
#define BIGFUCKINGGUN9000_HPP
#include "AWeapon.hpp"

class BigFuckingGun9000 : virtual public AWeapon
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		BigFuckingGun9000();
		BigFuckingGun9000(BigFuckingGun9000 const & copy);
		BigFuckingGun9000 & operator=(BigFuckingGun9000 const & op);
		virtual ~BigFuckingGun9000();

		void attack() const;
};

#endif