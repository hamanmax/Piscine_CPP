/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:59:55 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/24 14:38:36 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
	int				_hit_point;
	unsigned int	_max_hit_point;
	int				_energy_point;
	unsigned int	_max_energy_point;
	int				_level;
	std::string		_name;
	int				_melee_damage;
	int				_ranged_damage;
	int				_armor_damage_reduction;
public:
	ClapTrap();
	ClapTrap(const ClapTrap & cp);
	ClapTrap & operator=(const ClapTrap & op);
	~ClapTrap();

	ClapTrap(int hp,unsigned int mhp,int ep,unsigned int mep,int level,std::string name,int md,int rd,int adr);
	
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	rangedAttack(std::string const & target, std::string const & AttackerType);
	void	meleeAttack(std::string const & target, std::string const & AttackerType);
};

#endif