/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 10:18:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/20 12:55:43 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class NinjaTrap: public ClapTrap
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
};

#endif