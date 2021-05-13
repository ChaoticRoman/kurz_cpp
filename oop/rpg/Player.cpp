#include "Player.h"

#include <iostream>

using namespace std;

int Player::alivePlayers = 0;
int Player::createdPlayers = 0;

Player::Player(string name):
    name_ { name }, health_ { 100 }
{
    cout << name_ << " has been born!" << endl;
    ++createdPlayers;
    ++alivePlayers;
}

Player::~Player()
{
    health_ = 0;
    --alivePlayers;
    cout << name_ << " is leaving..." << endl;
}

std::string Player::salutation() const
{
    string result = "";

    result += !alive() ? "Dead " : "";

    result += name_;

    return result;
}

void Player::setHealth(int newHealth)
{
    if (health_ == 0) {
        return;
    }
    health_ = newHealth < 0 ? 0 : newHealth;
    if (health_ == 0)
    {
        alivePlayers--;
    }
}

int Player::health() const {
    return health_;
}

bool Player::alive() const {
    return health_ > 0;
}

void Player::printGameInfo()
{
    cout << alivePlayers << " alive, "
         << createdPlayers << " created during the game"
         << endl;
}

void Player::printPlayerInfo()
{
    cout << salutation() << " has " << health()
         << "HP." << endl;
}
