/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:51:28 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:24:31 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : virtual public Enemy
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		SuperMutant();
		SuperMutant(SuperMutant const & copy);
		SuperMutant & operator=(SuperMutant const & op);
		virtual ~SuperMutant();

		void takeDamage(int damage);
};

#endif