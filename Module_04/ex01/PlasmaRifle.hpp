/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:13:02 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:22:34 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon
{
	private:
	protected:
		/*Arg*/
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const & copy);
		PlasmaRifle & operator=(PlasmaRifle const & op);
		virtual ~PlasmaRifle();

		void attack() const;
};

#endif