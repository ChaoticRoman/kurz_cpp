#include "Player.h"
#include "Mage.h"

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

void game() {
    Player::printGameInfo(1);

    Player p("Emil");
    Player::printGameInfo(2);
    Player p2(p);
    Player p3(p2);

    p.printPlayerInfo();
    p2.printPlayerInfo();
    p3.printPlayerInfo();

    p2.setHealth(-100);
    Player::printGameInfo(3);

    p.printPlayerInfo();
    p2.printPlayerInfo();
    p3.printPlayerInfo();

    //vector<Player> players { Player(), Player("Emil") };


    /*vector<shared_ptr<Player>> players;

    players.push_back(make_shared<Player>("Emil"));
    players.push_back(make_shared<Mage>("Cherryfuchs"));*/

    /*for (auto player: players)
    {
        player.printPlayerInfo();
    }*/


    // m.castMagic(); // TODO
    //players[0].reset();

    //Player::printGameInfo(2);
}

int main() {
    Player::printGameInfo(0);
    game();
    Player::printGameInfo(3);
    return 0;
}
