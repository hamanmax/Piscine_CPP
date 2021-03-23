<<<<<<< HEAD
#ifndef MAIN_HPP
#define MAIN_HPP

class main : virtual public 
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		main();
		main(const main & copy);
		main & operator=(const main & op);
		~main();
};

main::main(){}

main::main(){}

main::main(const main & copy){*this = copy;}

main & main::operator=(const main & op){
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:28:18 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/22 17:19:16 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	srand(time(NULL));
	SuperTrap DeadMachine("LAMAURE"); 
	//ScavTrap Portier("Bob");

	DeadMachine.takeDamage(100);
	//DeadMachine.ninjaShoebox(Portier);
	//Portier.beRepaired(0);
	return 0;
>>>>>>> 79c2c8702e558df503c882bb29203945b237ad55
}

main::~main(){}

#endif