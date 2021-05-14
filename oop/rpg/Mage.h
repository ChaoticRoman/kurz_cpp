#pragma once

#include "Player.h"

#include <string>


class Mage : public Player
{
public:
    Mage();
    Mage(std::string name);
    ~Mage();

    void castMagic();

    std::string salutation() const;
};
