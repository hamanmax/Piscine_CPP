/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 10:18:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/24 16:45:09 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"


class NinjaTrap: virtual public ClapTrap
{
private:
	/* data */
public:
	NinjaTrap();
	NinjaTrap(const NinjaTrap & cp);
	NinjaTrap & operator=(const NinjaTrap & op);
	~NinjaTrap();

	NinjaTrap(std::string name);
	
	void ninjaShoebox(ClapTrap & box);
	void ninjaShoebox(ScavTrap & box);
	void ninjaShoebox(FragTrap & box);
	void ninjaShoebox(NinjaTrap & box);
};

#endif