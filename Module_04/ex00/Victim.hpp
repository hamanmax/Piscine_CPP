/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:46:49 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 15:01:35 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class Victim 
{
	private:
		Victim();
	protected:
		std::string _name;
	public:
		Victim(std::string name);
		Victim(const Victim & copy);
		Victim & operator=(const Victim & op);
		virtual ~Victim();

		void introduce();
		virtual void getPolymorphed() const;
		std::string get_name()const;
		void set_name(std::string const name);
};

std::ostream& operator<<(std::ostream & os,const Victim & op);
#endif
