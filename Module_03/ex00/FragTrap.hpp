/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:29:24 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/20 12:31:31 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>

class FragTrap
{
private:
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
	/* Constructeur Cannonique */
	FragTrap();
	FragTrap(const FragTrap & cp);
	~FragTrap();
	FragTrap & operator=(const FragTrap & cp);
	/* Constructeur Classique */
	FragTrap(std::string name);
	/*Fonction Membre */
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	vaulthunter_dot_exe(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);


};

#endif