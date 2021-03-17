/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:48:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/17 14:10:27 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
	int i = 12;
	int *j = &i;
	std::string brain = "HI THIS IS BRAIN";
	std::string& ref(brain);

	std::cout << j << std::endl;
	std::cout << ref << std::endl;
	return 0;
}
