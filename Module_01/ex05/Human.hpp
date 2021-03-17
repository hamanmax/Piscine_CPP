/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:54:32 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/17 18:09:34 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include <iostream>
#include "Brain.hpp"

class Human
{
private:
	const Brain b;
public:
	const void * identifier();
	const Brain& getBrain() const;
	Human(/* args */);
	~Human();
};

#endif