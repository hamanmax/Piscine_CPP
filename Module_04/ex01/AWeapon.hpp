/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:16:31 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:15:00 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon 
{
	private:
		AWeapon();
	protected:
		std::string	_name;
		int			_apcost;
		int			_damage;
	public:
		AWeapon(const AWeapon & copy);
		AWeapon & operator=(const AWeapon & op);
		virtual ~AWeapon();

		AWeapon(std::string const & name, int apcost, int damage);

		std::string virtual get_name() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};
#endif