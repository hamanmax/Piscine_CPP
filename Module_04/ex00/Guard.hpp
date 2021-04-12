/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Guard.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:54:44 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 16:00:51 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GUARD_HPP
#define GUARD_HPP

#include "Victim.hpp"
#include <iostream>

class Guard : virtual public Victim
{
	private:
		Guard();
	protected:
		/*Arg*/
	public:
		Guard(std::string name);
		Guard(Guard const & copy);
		Guard & operator=(Guard const & op);
		virtual ~Guard();

		std::string get_name()const;
		void set_name(std::string const name);
		void getPolymorphed()const;
};

std::ostream& operator<<(std::ostream & os,const Guard & op);

#endif
