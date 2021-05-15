#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include <iostream>
#include <string>

int main()
{

    Sorcerer robert("Robert", "the magicient");

    Victim jim("Jim");
    Peon joe("Joe");

    std::cout << robert << jim << joe;

    robert.polymorh(jim);
    robert.polymorh(joe);
}