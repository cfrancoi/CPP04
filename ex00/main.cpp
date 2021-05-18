#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Grouillot.hpp"

#include <iostream>
#include <string>

int main()
{

    Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jim");
    Peon joe("Joe");
    Grouillot znork("Znork");

    std::cout << robert << jim << joe << znork;

    robert.polymorh(jim);
    robert.polymorh(joe);
}