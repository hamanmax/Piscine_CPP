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
#endif