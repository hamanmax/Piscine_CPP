/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:29:24 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/20 18:10:37 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:

	public :
		FragTrap();
		FragTrap(const FragTrap & cp);
		~FragTrap();
		FragTrap & operator=(const FragTrap & op);

		FragTrap(std::string name);
	
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif