
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

#include <iostream>

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    Squad* vlc = new Squad;

    vlc->push(bob);
    vlc->push(jim);
    vlc->push(jim->clone());
    for (int i = 0; i < vlc->getCount(); i++)
    {
       
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "Copy Squad" << std::endl; 
    ISquad *copy = new Squad(*vlc);

    copy->push(bob->clone());
    copy->push(jim->clone());
    delete vlc;

    std::cout << "Copy len : " << copy->getCount() << std::endl;
    std::cout << "Delete Copy : "<< std::endl;

    delete copy;

    std::cout << "***************************" << std::endl;

    vlc = new Squad;
    while (vlc->getCount() < 100)
    {
        vlc->push(new TacticalMarine);
        vlc->push(new AssaultTerminator);
    }

    delete vlc;

    return 0;
}