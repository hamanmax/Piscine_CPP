/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:28:18 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/24 14:12:18 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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
	ref.meleeAttack("La Panthère rose");
	ref.rangedAttack("La Panthère rose");

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
	ScavTrap Scav("T-0002");
	FragTrap Frag("T-2000");
	std::cout << "Meme texte que ex00" << std::endl;
	test_FragTrap(Frag);
	std::cout << "Nouvelle serie de test" << std::endl;
	test_ScavTrap(Scav);
	return 0;
}
