/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:59:55 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/20 12:13:57 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	int				_hit_point;
	unsigned int	_max_hit_point;
	int				_energy_point;
	unsigned int	_max_energy_point;
	int				_level;
	int				_melee_damage;
	int				_ranged_damage;
	int				_armor_damage_reduction;
public:

	ClapTrap();
	~ClapTrap();
	ClapTrap(ClapTrap const  & cp);
	ClapTrap & operator=(ClapTrap const & op);

	ClapTrap(std::string name,int hp,uint mhp,int ep, uint mep,int level,int md,int rd,int adr);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif