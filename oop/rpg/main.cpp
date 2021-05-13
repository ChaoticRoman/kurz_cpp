#include "Player.h"
#include "Arena.h"

#include <iostream>

using namespace std;

int main() {
    Player::printGameInfo();

    Player p("Emil");
    p.printPlayerInfo();

    p.setHealth(50);
    p.printPlayerInfo();

    p.setHealth(0);
    p.printGameInfo();

    return 0;
}
