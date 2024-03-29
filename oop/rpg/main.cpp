#include "Player.h"
#include "Mage.h"

#include <iostream>
#include <memory>
#include <vector>

using namespace std;


void game() {
    //Player::printGameInfo(1);

    vector<shared_ptr<Player>> players;
    players.push_back(make_shared<Player>("Emil"));
    players.push_back(make_shared<Mage>("Cherryfuchs"));

    for (const auto &player: players)
    {
        player->printPlayerInfo();

        cout << player->name() << " is "
             << (is<Mage>(player) ? "" : "not ") << ("a mage.") << endl;

        if (is<Mage>(player)) castTo<Mage>(player)->castMagic();
    }

    for (const auto &player: players)
    {
        player->printPlayerInfo();
    }

    Player::printGameInfo(2);
}

int main() {
    //Player::printGameInfo(0);
    game();
    //Player::printGameInfo(3);
    return 0;
}
