#include "Player.h"
#include "npc.h"
#include "random.h"

#include <iostream>

int main()
{
    Player p("Killer");
    NPC g("Random guard");

    srand(time(NULL));
    int i = rand(0, 1);
    while (p.health() > 0 && g.health() > 0)
    {
        if (i % 2)
        {
            p.takeDamage(g.attack());
        }
        else
        {
            g.takeDamage(p.attack());
        }
        ++i;
    }

    std::cout << p.name() << ": " << (p.alive() ? "LIVES!" : "DIED!") << "\n";
    std::cout << g.name() << ": " << (g.alive() ? "LIVES!" : "DIED!") << "\n";

    return 0;
}
