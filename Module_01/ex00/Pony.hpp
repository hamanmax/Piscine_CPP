/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:59:53 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/16 16:43:55 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pony
{
private:
	int _age;
	int _height;
	int _weight;
	std::string _name;
	std::string _color;
public:
	Pony();
	Pony(std::string get_name, std::string get_color, int get_age, int get_height, int get_weight);
	~Pony();
	void	display_my_poney();
	int get_age() const;
	int set_age(int i);
	int get_weight() const;
	int set_weight(int i);
	int get_height() const;
	int set_height(int i);
	std::string get_name() const;
	std::string set_name(std::string str);
	std::string get_color() const;
	std::string set_color(std::string str);
};
