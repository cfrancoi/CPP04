#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Mutant.hpp"
#include "Eviscerator.hpp"

int main()
{
    Character* me = new Character("me");

    std::cout << *me;

    Enemy *a = new SuperMutant();
    Enemy *b = new RadScorpion();

    me->attack(a);
    
    AWeapon *pr = new PlasmaRifle();
    me->equip(pr);
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    me->attack(b);
    me->attack(b);
    AWeapon *pf = new PowerFist();

   

    me->equip(pf);
    me->attack(a);
    me->attack(a);
    std::cout << *me;
    me->attack(a);
    me->recoverAP();
    me->attack(a);

    me->recoverAP();
     std::cout << *me;
    me->recoverAP();
     std::cout << *me;
    me->recoverAP();
     std::cout << *me;
    me->recoverAP();
     std::cout << *me;
    me->recoverAP();
     std::cout << *me;

    AWeapon *ev = new Eviscerator();

    me->equip(ev);

    me->attack(a);
    me->attack(a);

    Enemy *c = new Mutant();

    me->attack(c);

    return(0);
}