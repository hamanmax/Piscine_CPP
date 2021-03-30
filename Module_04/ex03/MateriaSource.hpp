#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		IMateriaSource * Source[4];
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

MateriaSource::MateriaSource(){}

MateriaSource::~MateriaSource(){}

MateriaSource::MateriaSource(const MateriaSource & copy){*this = copy;}

MateriaSource & MateriaSource::operator=(const MateriaSource & op){
}

void MateriaSource::learnMateria(AMateria *m){}

AMateria * MateriaSource::createMateria(std::string const & type){
	
}

#endif