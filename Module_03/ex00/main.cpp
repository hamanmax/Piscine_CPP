/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:28:18 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/19 14:30:11 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(NULL));
	ScavTrap Terminator("T_0002");
	//std::string target = "Oui-Oui";

	// Terminator.meleeAttack(target);
	// Terminator.rangedAttack(target);
	// Terminator.vaulthunter_dot_exe(target);
	// Terminator.vaulthunter_dot_exe(target);
	// Terminator.vaulthunter_dot_exe(target);
	// Terminator.vaulthunter_dot_exe(target);
	// Terminator.takeDamage(5);
	// Terminator.takeDamage(-8);
	// Terminator.takeDamage(0);
	// Terminator.takeDamage(20);
	// Terminator.takeDamage(25);
	// Terminator.takeDamage(69);
	// Terminator.beRepaired(69);
	// Terminator.beRepaired(3);
	// Terminator.beRepaired(-8);
	Terminator.challengeNewcomer();
	return 0;
}
