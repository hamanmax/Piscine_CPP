/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:15:12 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/09 18:17:29 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <limits.h>
#include <math.h>
#include <exception>

int main(int argc, char const *argv[])
{
	if ( argc != 2 || argv[1][0] == 0){
		std::cout << "Not enought Parameters\n";
		return(-1);
	}
	class CharIsImpossibleExce: virtual public std::exception{
		public:
			virtual const char * what()const throw(){return("char\t: impossible.\n");}};
	class CharIsNotDisplayableExce: virtual public std::exception{
		public:
			virtual const char * what()const throw(){return("char\t: non displayable.\n");}};

	std::string line(argv[1]);
	double d;
	if (isprint(line[0]) != 0 && line.size() == 1 && isdigit(line[0]) == 0)
		d = static_cast<int>(line[0]);
	else
		d = atof(line.c_str());
	try
	{
		if (d > CHAR_MAX || d < CHAR_MIN || isnan(d) == true)
			throw CharIsImpossibleExce();
		else if (isprint(d) != 0)
			std::cout << "char\t: '" << static_cast<char>(d) << "'\n";
		else
			throw CharIsNotDisplayableExce();
	}
	catch(const std::exception& e){
		std::cout << e.what();}
	std::cout <<"int\t: " << static_cast<int>(d) << "\n";
	if (d - static_cast<int>(d) == 0)
	{
	std::cout <<"float\t: " << static_cast<float>(d) << ".0f\n";
	std::cout <<"double\t: " << static_cast<double>(d) << ".0\n";
	}
	else
	{
	std::cout <<"float\t: " << static_cast<float>(d) << "f\n";
	std::cout <<"double\t: " << d << "\n";
	}
	return 0;
}
