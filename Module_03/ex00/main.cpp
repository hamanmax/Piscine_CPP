/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:28:18 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/24 12:34:57 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));
	FragTrap Terminator("T-2000");

	std::cout << "Test de prise de dégats en cours\n" << std:: endl;

	Terminator.takeDamage(2);
	Terminator.takeDamage(5);
	Terminator.takeDamage(8);
	Terminator.takeDamage(27);
	Terminator.takeDamage(35);
	Terminator.takeDamage(258);
	Terminator.takeDamage(-2);

	std::cout << "Fin des dégats maintenant on se répare \n" << std:: endl;

	Terminator.beRepaired(10);
	Terminator.beRepaired(25);
	Terminator.beRepaired(25);
	Terminator.beRepaired(60);
	Terminator.beRepaired(-12);
	Terminator.beRepaired(4568);

	std::cout << "Petit Mix claque dans la gueule / laser boum boum\n" << std:: endl;
	Terminator.meleeAttack("La Panthère rose");
	Terminator.rangedAttack("La Panthère rose");

	std::cout << "Maintenant Place A La Technique Speciale De La Mort Qui Tue\n" << std:: endl;

	Terminator.vaulthunter_dot_exe("Oui-Oui");
	Terminator.vaulthunter_dot_exe("Oui-Oui");
	Terminator.vaulthunter_dot_exe("Oui-Oui");
	Terminator.vaulthunter_dot_exe("Oui-Oui");
	Terminator.vaulthunter_dot_exe("Oui-Oui");


	std::cout << "Fin de la demonstration nous vous remercions de votre visite dans notre centre de R&D\n" << std:: endl;
	std::cout << "Skynet Enterprise\n" << std:: endl;
	return 0;
}
