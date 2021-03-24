/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:28:18 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/24 17:07:11 by mhaman           ###   ########lyon.fr   */
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

void test_ScavTrap(ScavTrap & ref)
{
	std::cout << "Test de prise de dégats en cours\n" << std:: endl;
	ref.takeDamage(2);
	ref.takeDamage(5);
	ref.takeDamage(8);
	ref.takeDamage(27);
	ref.takeDamage(35);
	ref.takeDamage(258);
	ref.takeDamage(-2);

	std::cout << "Fin des dégats maintenant on se répare \n" << std:: endl;

	ref.beRepaired(10);
	ref.beRepaired(25);
	ref.beRepaired(25);
	ref.beRepaired(60);
	ref.beRepaired(-12);
	ref.beRepaired(4568);

	std::cout << "Petit Mix claque dans la gueule / laser boum boum\n" << std:: endl;
	ref.meleeAttack("La Panthère rose");
	ref.rangedAttack("La Panthère rose");
	ref.meleeAttack("La Panthère rose","Scav");
	ref.rangedAttack("La Panthère rose","Scav");

	std::cout << "Maintenant Place A La Technique Speciale De La Mort Qui Tue\n" << std:: endl;

	ref.challengeNewcomer();
	ref.challengeNewcomer();
	ref.challengeNewcomer();

	std::cout << "Fin de la demonstration nous vous remercions de votre visite dans notre centre de R&D\n" << std:: endl;
	std::cout << "Skynet Enterprise\n" << std:: endl;
}

void test_FragTrap(FragTrap & ref)
{
	std::cout << "Test de prise de dégats en cours\n" << std:: endl;

	ref.takeDamage(2);
	ref.takeDamage(5);
	ref.takeDamage(8);
	ref.takeDamage(27);
	ref.takeDamage(35);
	ref.takeDamage(258);
	ref.takeDamage(-2);

	std::cout << "Fin des dégats maintenant on se répare \n" << std:: endl;

	ref.beRepaired(10);
	ref.beRepaired(25);
	ref.beRepaired(25);
	ref.beRepaired(60);
	ref.beRepaired(-12);
	ref.beRepaired(4568);

	std::cout << "Petit Mix claque dans la gueule / laser boum boum\n" << std:: endl;
	ref.meleeAttack("Oui-Oui");
	ref.rangedAttack("Oui-Oui");
	ref.meleeAttack("Oui-Oui","Frag");
	ref.rangedAttack("Oui-Oui","Frag");

	std::cout << "Maintenant Place A La Technique Speciale De La Mort Qui Tue\n" << std:: endl;

	ref.vaulthunter_dot_exe("Oui-Oui");
	ref.vaulthunter_dot_exe("Oui-Oui");
	ref.vaulthunter_dot_exe("Oui-Oui");
	ref.vaulthunter_dot_exe("Oui-Oui");
	ref.vaulthunter_dot_exe("Oui-Oui");


	std::cout << "Fin de la demonstration nous vous remercions de votre visite dans notre centre de R&D\n" << std:: endl;
	std::cout << "Skynet Enterprise\n" << std:: endl;
}

int main(void)
{
	srand(time(NULL));
	ClapTrap Boite;
	FragTrap Terminator("T-2000");
	ScavTrap Portenator("T-0002");
	NinjaTrap Ninjanator("T-Gaiden");
	std::cout << "\nTest de Frag en cours\n" << std::endl;
	test_FragTrap(Terminator);
	std::cout << "\nTest de Scav\n" << std::endl;
	test_ScavTrap(Portenator);
	std::cout << "\nTest rajouter de Ninja\n" << std::endl;

	Ninjanator.ninjaShoebox(Terminator);
	Ninjanator.ninjaShoebox(Portenator);
	Ninjanator.ninjaShoebox(Boite);
	Ninjanator.ninjaShoebox(Ninjanator);

	Ninjanator.meleeAttack("Oui-Oui","Ninja");
	Ninjanator.rangedAttack("Oui-Oui","Ninja");

	std::cout << "\nTest Rajouter de SuperTrap\n" << std::endl;

	SuperTrap Supernator("T-2XX2");

	Supernator.meleeAttack("Oui-Oui");
	Supernator.rangedAttack("Oui-Oui");
	return 0;
}