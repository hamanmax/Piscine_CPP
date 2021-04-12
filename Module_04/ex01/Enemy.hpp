/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:33:13 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:20:02 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy 
{
	private:
		Enemy();
	protected:
		int _hp;
		std::string _type;
	public:
		Enemy(Enemy const & copy);
		Enemy & operator=(Enemy const & op);
		virtual ~Enemy();

		Enemy(int hp, std::string const & type);

		std::string virtual getType() const;
		int getHP() const;
		virtual void takeDamage(int damage);
};

#endif