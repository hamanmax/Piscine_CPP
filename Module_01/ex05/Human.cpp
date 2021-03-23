/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:54:23 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 14:24:07 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(/* args */)
{
}

Human::~Human()
{
}

const void * Human::identifier()
{
	return(b.identifier());
}

const Brain& Human::getBrain() const
{
	return(b);
}