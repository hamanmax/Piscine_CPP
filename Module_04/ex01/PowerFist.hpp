/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:13:39 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:23:48 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : virtual public AWeapon
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		PowerFist();
		PowerFist(const PowerFist & copy);
		PowerFist & operator=(const PowerFist & op);
		virtual ~PowerFist();

		void attack() const;
};

#endif