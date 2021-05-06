#pragma once

#include <string>

using namespace std;

class Player
{
public:
    Player(string name);
    ~Player();

public: // getters
    string name() { return name_; }
    int health() { return health_; }
    bool alive() { return health_ > 0; }

public: // actions
    int attack();
    void takeDamage(int damage);

protected:
    string name_;
    int health_ = 100;
    int strength_;
};
