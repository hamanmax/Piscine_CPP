/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:54:08 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 14:31:35 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
private:
	void *address;
	int _size;
	int _height;
public:
	Brain(/* args */);
	~Brain();
	const void * identifier() const;
	int getBrainSize() const;
	void setBrainSize(const int size);
	int getBrainHeight() const;
	void setBrainHeight(const int height);
};

#endif