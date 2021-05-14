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

        auto mage = dynamic_pointer_cast<Mage>(player);
        cout << player->name() << " is "
             << (mage ? "" : "not ") << ("a mage.") << endl;

        if (mage) mage->castMagic();
    }

    for (const auto &player: players)
    {
        player->printPlayerInfo();
    }

    //Player::printGameInfo(2);
}

int main() {
    //Player::printGameInfo(0);
    game();
    //Player::printGameInfo(3);
    return 0;
}
