/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:13:11 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/21 17:37:25 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	if (argc < 4 || argc > 4)
	{
		std::cout << "This Program need 3 parameters" << std::endl;
		return (0);
	}
	size_t found;
	std::ifstream inputfile(argv[1]);
	if (inputfile.fail() == true)
	{
		std::cout << "Can't open the file" << std::endl;
		return (1);
	}
	std::string file = argv[1];
	std::string outfile = file += ".replace";
	std::ofstream outpufile(outfile.c_str());
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;

	if (s1[0] == '\0' || s2[0] == '\0')
	{
		std::cout << "s1 or s2 cant be empty" << std::endl;
		return (0);
	}
	else
	{
		while (std::getline(inputfile,line))
		{
			while ((found = line.find(s1)) != line.npos)
				line.replace(found,s1.length(),s2);
			outpufile << line << std::endl;
		}
	}
	return 0;
}
