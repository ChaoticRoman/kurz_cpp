#include "Player.h"

#include <iostream>
#include <string>

class Mage : public Player
{
public:
    Mage(std::string name): Player(name) {}

    void castMagic() {
        health_ *= 2;
        std::cout << "****" << std::endl;
    }
};
