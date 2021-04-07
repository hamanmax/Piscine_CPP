#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : virtual public IMateriaSource
{
	private:
		AMateria * _source[4];
	protected:
		/*Arg*/
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & copy);
		MateriaSource & operator=(const MateriaSource & op);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

};

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
			delete this->_source[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource & copy){*this = copy;}

MateriaSource & MateriaSource::operator=(const MateriaSource & op){
	for(int i = 0;i < 4;i++)
	{
		this->_source[i] = op._source[i];
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
		if (this->_source[i]->getType() == type)
		{
			AMateria * copy = this->_source[i]->clone();
			return copy;
		}
	}
	std::cout << "Materia type is invalid" << "\n";
	return (NULL);
}

#endif