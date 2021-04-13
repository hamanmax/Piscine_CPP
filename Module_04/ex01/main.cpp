#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "EnergySword.hpp"
#include "BigFuckingGun9000.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "Mgalekgolo.hpp"
#include "Cacodemon.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
Character* me = new Character("me");
std::cout << *me;
Enemy* Scorpion = new RadScorpion();
Enemy* Tank = new SuperMutant();
Enemy* Hunter = new Mgalekgolo();
Enemy* Caco = new Cacodemon();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
AWeapon* es = new EnergySword();
AWeapon* bfg_9000 = new BigFuckingGun9000();


std::cout << *me << "\n";
me->equip(es);
std::cout << *me << "\n";
me->attack(Scorpion);
std::cout << *me << "\n";
me->equip(bfg_9000);
std::cout << *me << "\n";
me->attack(Scorpion);
std::cout << *me << "\n";
me->equip(pf);
std::cout << *me << "\n";
me->equip(pr);
std::cout << *me << "\n";
me->attack(Hunter);
std::cout << *me << "\n";
me->equip(bfg_9000);
me->recoverAP();
me->recoverAP();
me->recoverAP();
me->recoverAP();
std::cout << *me << "\n";
me->attack(Tank);
std::cout << *me << "\n";
me->recoverAP();
me->recoverAP();
me->recoverAP();
me->recoverAP();
me->attack(Caco);
me->recoverAP();
me->recoverAP();
me->recoverAP();
me->recoverAP();
me->attack(Caco);
std::cout << *me << "\n";

delete pf;
delete Hunter;
delete Scorpion;
delete es;
delete pr;
delete bfg_9000;
delete me;


}