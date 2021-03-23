/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:28:18 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/22 18:25:29 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void Norbert()
{
	std::cout << "\n###\tCreation de Norbert\t###\n" << std::endl;
	ScavTrap Norbert("Norbert");
	std::cout << "\n###\tDestruction des Norbert\t###\n" << std::endl;
}

void M4CH1N3()
{
	std::cout << "\n###\tCreation de M4CH1N3\t###\n" << std::endl;
	FragTrap M4CH1N3("M4CH1N3");

	M4CH1N3.vaulthunter_dot_exe("Denver le dernier dinosaure");
	M4CH1N3.vaulthunter_dot_exe("Denver le dernier dinosaure");
	M4CH1N3.vaulthunter_dot_exe("Denver le dernier dinosaure");
	M4CH1N3.vaulthunter_dot_exe("Denver le dernier dinosaure");
	M4CH1N3.vaulthunter_dot_exe("Denver le dernier dinosaure");
	std::cout << "\n###\tDestruction des ClapTrap\t###\n" << std::endl;
	
}

int main(void)
{
	srand(time(NULL));
	Norbert();
	M4CH1N3();
	return 0;
}
