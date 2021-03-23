/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 10:18:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/22 17:19:04 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
private:
	/* data */
public:
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const  & cp);
	NinjaTrap();
	NinjaTrap & operator=(NinjaTrap const & op);
	~NinjaTrap();

	void ninjaShoebox(ClapTrap & box);
	//const int getNinjaHitPoint() const;
};

#endif