/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:26:43 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/13 13:44:41 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for(int i = 0; i < 4;i++)
	{
		this->_source[i] = NULL;
	}
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4;i++)
	{
		if (this->_source[i] != NULL)
		{
			delete this->_source[i];
			this->_source[i] = NULL;
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource & copy){*this = copy;}

MateriaSource & MateriaSource::operator=(const MateriaSource & op){
	for(int i = 0;i < 4;i++)
	{
		if (this->_source[i])
			delete this->_source[i];
	}
	for(int i = 0;i < 4;i++)
	{
		this->_source[i] = op._source[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m){
	for (int i = 0;i < 4;i++)
	{
		if (this->_source[i] == NULL)
		{
			this->_source[i] = m;
			return;
		}
	}
}

AMateria * MateriaSource::createMateria(std::string const & type){
	for (int i = 0;i < 4;i++)
	{
		if (this->_source[i] && this->_source[i]->getType() == type)
		{
			AMateria * copy = this->_source[i]->clone();
			return copy;
		}
	}
	std::cout << "Materia type is invalid\n";
	return (NULL);
}
