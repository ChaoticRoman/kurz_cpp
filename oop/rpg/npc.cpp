#include "npc.h"

#include <iostream>

NPC::NPC(string name): Player(name)
{
    std::cout << "NPC appeared with " << health_ << " HP\n";
}

NPC::~NPC()
{
    std::cout << "NPC " << name_ << " leaving the scene.\n";
}
