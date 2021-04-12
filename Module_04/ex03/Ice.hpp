/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:27:14 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 20:28:23 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include "AMateria.hpp"

class Ice: virtual public AMateria
{
	private:
		unsigned int _xp;
		std::string _type;
	protected:
		/*Arg*/
	public:
		Ice();
		Ice(const Ice & copy);
		Ice & operator=(const Ice & op);
		~Ice();

		Ice(std::string type);

		std::string const & getType() const;
		unsigned int getXP() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif