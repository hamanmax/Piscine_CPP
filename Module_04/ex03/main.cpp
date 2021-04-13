#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	ICharacter* bob = new Character("bob");
	Character * Jean = new Character("Jean");
	Jean->equip(src->createMateria("ice"));
	Jean->equip(src->createMateria("cure"));
	Character Timmy("Timmy");
	Timmy.equip(src->createMateria("ice"));
	Timmy.equip(src->createMateria("ice"));
	Timmy.use(0,*me);
	Timmy.use(1,*me);
	Timmy = *Jean;
	Character Tim(Timmy);
	me->use(0, *bob);
	Timmy.use(0, *me);
	Tim.use(0,*me);
	delete Jean;
	delete bob;
	delete me;
	delete tmp;
	delete src;
	return 0;
}