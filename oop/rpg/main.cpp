#include "Player.h"
#include "Arena.h"

#include <iostream>

using namespace std;

void game() {
    Player p1("Emil");
    Player p2("Kamil");
    Player p3("Pepa");
    p2.setHealth(0);
    p3.setHealth(0);
    Player::printGameInfo();
}

int main() {
    game();
    Player::printGameInfo();
    return 0;
}
