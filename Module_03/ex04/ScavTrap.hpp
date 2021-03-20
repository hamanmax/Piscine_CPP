/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:52:10 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/20 13:17:08 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
	public :
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const  & cp);
	ScavTrap();
	ScavTrap & operator=(ScavTrap const & op);
	~ScavTrap();
	
	void	challengeNewcomer();
};

#endif