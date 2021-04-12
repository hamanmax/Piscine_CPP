#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Farmer.hpp"
#include "Guard.hpp"

int main()
{
Sorcerer robert("Robert", "the Magnificent");
Sorcerer alex("Alexandre", "the Great");
Victim jim("Jimmy");
Peon joe("Joe");
Farmer tom("Tommy");
Victim tim = Peon("Tim");
Guard jas("Jason");
std::cout << robert << jim << joe << tom << tim << jas;
robert.polymorph(jim);
alex.polymorph(joe);
alex.polymorph(tom);
jas.getPolymorphed();
tom.introduce();
tom.getPolymorphed();
tim.introduce();
tim.getPolymorphed();
return 0;
}