/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:28:18 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/22 17:35:14 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	srand(time(NULL));
	NinjaTrap Terminator = NinjaTrap("Gaiden");
	ScavTrap Invocation = ScavTrap("tutu");
	std::string target = "Oui-Oui";

	Terminator.ninjaShoebox(Invocation);
	return 0;
}
