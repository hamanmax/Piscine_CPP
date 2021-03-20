/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:52:10 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/20 12:54:01 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public :
	ScavTrap();
	ScavTrap(const ScavTrap & cp);
	ScavTrap & operator=(const ScavTrap & op);
	~ScavTrap();

	ScavTrap(std::string name);
	
	void	challengeNewcomer();
};

#endif