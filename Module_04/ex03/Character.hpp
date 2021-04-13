/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:04:24 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/13 10:27:26 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <cstring>

class AMateria;
class Character : public ICharacter
{
	private:
		AMateria *_inventory[4];
		std::string _name;
		int _size;
		Character();
	protected:
		/*Arg*/
	public:
		Character(Character const & copy);
		Character & operator=(Character const & op);
		~Character();

		Character(std::string name);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
#endif