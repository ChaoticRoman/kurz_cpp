#pragma once

#include "Player.h"

#include <string>

class NPC: public Player
{
public:
    NPC(string name);
    ~NPC();
};
