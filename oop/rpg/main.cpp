#include "Player.h"
#include "Arena.h"

#include <iostream>

using namespace std;

int main() {
    Player::printGameInfo();

    Player p("Emil");
    {
        Player p2("Kamil");
        Player p3("Emil2");
        p2.setHealth(0);
        p3.setHealth(0);
    }
    p.printPlayerInfo();

    p.printGameInfo();

    return 0;
}
