/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lists.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:19:42 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 18:20:11 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_HPP
#define LISTS_HPP
#include "ISpaceMarine.hpp"
#include <iostream>

class Lists
{
	private:
		size_t _size;
		ISpaceMarine *_marine;
		Lists *_next;
	protected:
		/*Arg*/
	public:
		Lists();
		Lists(Lists const & copy);
		Lists & operator=(Lists const & op);
		~Lists();

		void push(Lists ** head_ref, ISpaceMarine * data);
		void del(Lists ** head_ref);
		Lists *getNode(Lists *head_ref,int nb) const;
		ISpaceMarine * getMarine();
		size_t get_size()const ;
};

#endif