/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 14:57:33 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 20:27:49 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include "AMateria.hpp"

class Cure: virtual public AMateria
{
	private:
		unsigned int _xp;
		std::string _type;
	protected:
		/*Arg*/
	public:
		Cure();
		Cure(const Cure & copy);
		Cure & operator=(const Cure & op);
		~Cure();

		Cure(std::string type);

		std::string const & getType() const;
		unsigned int getXP() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif