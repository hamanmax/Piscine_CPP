/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:08:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:23:58 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : virtual public Enemy
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		RadScorpion();
		RadScorpion(RadScorpion const & copy);
		RadScorpion & operator=(RadScorpion const & op);
		virtual ~RadScorpion();

};

#endif