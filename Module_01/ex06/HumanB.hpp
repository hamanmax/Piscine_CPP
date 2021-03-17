/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:07:29 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/17 18:19:28 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	Weapon *M4_A4;
	std::string _name;
public:
	void attack();
	void setWeapon(Weapon& arme);
	HumanB(std::string str);
	~HumanB();
};
#endif