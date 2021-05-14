#include "Player.h"
#include "Mage.h"

#include <iostream>
#include <memory>

using namespace std;

void game() {
    Player::printGameInfo(1);

    Player p0;
    Player p1("Emil");
    Mage m0("Cherryfuchs");

    m0.castMagic();
    p0.setHealth(0);

    p0.printPlayerInfo();
    p1.printPlayerInfo();
    m0.printPlayerInfo();

    Player::printGameInfo(2);
}

int main() {
    Player::printGameInfo(0);
    game();
    Player::printGameInfo(3);
    return 0;
}
