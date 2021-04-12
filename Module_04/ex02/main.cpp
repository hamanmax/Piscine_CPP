#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* Bob = new TacticalMarine;
	ISpaceMarine* Jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(Bob);
	vlc->push(Jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	std::cout << "-------------------------------------\n";
	ISpaceMarine* Henry = new TacticalMarine;
	ISpaceMarine* Paul = new TacticalMarine;
	ISpaceMarine* Jacques = new AssaultTerminator;
	ISpaceMarine* Thomas = new AssaultTerminator;
	Squad t1;
	Squad t2;
	t1.push(Henry);
	t1.push(Paul);
	t2.push(Jacques);
	t2.push(Thomas);
	Squad t3(t2);
	t2 = t1;
	std::cout << "-------------------------------------\n";
	for (int i = 0; i < t3.getCount(); ++i)
	{
		ISpaceMarine* cur = t3.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	return 0;
}