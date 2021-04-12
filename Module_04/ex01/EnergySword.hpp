/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnergySword.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:13:24 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:20:17 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENERGYSWORD_HPP
#define ENERGYSWORD_HPP
#include "AWeapon.hpp"

class EnergySword : virtual public AWeapon
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		EnergySword();
		EnergySword(EnergySword const & copy);
		EnergySword & operator=(EnergySword const & op);
		virtual ~EnergySword();

		void attack() const;
};

#endif