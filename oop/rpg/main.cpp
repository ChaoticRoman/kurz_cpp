#include "Player.h"
#include "npc.h"

#include <iostream>

int main()
{
    Player p("Killer");
    NPC g("Random guard");

    while (p.health() > 0 && g.health() > 0)
    {
        p.takeDamage(g.attack());
    }

    return 0;
}
