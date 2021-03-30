#include <iostream>
#include <fstream>
#include <string>
#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
	return(0);
	ICharacter* jim = new Character("jim");

	//IMateriaSource* src = new MateriaSource();
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
//
	//ICharacter* moi = new Character("moi");
//
	//AMateria* tmp;
	//tmp = src->createMateria("ice");
	//moi->equip(tmp);
	//delete tmp;
}