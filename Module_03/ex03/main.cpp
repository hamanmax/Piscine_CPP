/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:28:18 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/20 10:57:39 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	srand(time(NULL));
	//ClapTrap Terminator = ClapTrap("T_001");
	NinjaTrap Terminator = NinjaTrap("T_001");
	ScavTrap Invocation = ScavTrap("tutu");

	//ScavTrap Terminator02("T_0002");
	//ScavTrap Terminator03("T_0003");
	std::string target = "Oui-Oui";

	//Terminator.meleeAttack(target);
	//Terminator.rangedAttack(target);
	//Terminator.vaulthunter_dot_exe(target);
	//Terminator.vaulthunter_dot_exe(target);
	//Terminator.vaulthunter_dot_exe(target);
	//Terminator.vaulthunter_dot_exe(target);
	//Terminator.takeDamage(5);
	//Terminator.takeDamage(-8);
	//Terminator.takeDamage(0);
	//Terminator.takeDamage(20);
	//Terminator.takeDamage(25);
	//Terminator.takeDamage(69);
	//Terminator.beRepaired(69);
	//Terminator.beRepaired(3);
	//Terminator.beRepaired(-8);
	Terminator.ninjaShoebox(Invocation);
	return 0;
}
