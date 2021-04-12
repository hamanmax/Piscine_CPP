/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:02:25 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 15:06:31 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"
#include <iostream>

class Peon : virtual public Victim
{
	private:
		Peon();
	protected:
	public:
		Peon(std::string name);
		Peon(const Peon & copy);
		Peon & operator=(const Peon & op);
		virtual ~Peon();

		std::string get_name()const;
		void set_name(std::string const name);
		void getPolymorphed()const;
};

std::ostream& operator<<(std::ostream & os,const Peon & op);
#endif