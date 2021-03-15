/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:43:59 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/15 13:43:04 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
	std::string str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	for (int i = 1; i < argc; ++i)
	{
		str = argv[i];
		for ( std::string::iterator i = str.begin(); i < str.end(); ++i)
			if (std::islower(*i) == 1)
				*i = std::toupper(*i);
		std::cout << str;
	}
	
	return 0;
}
