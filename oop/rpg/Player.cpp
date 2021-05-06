#include "Player.h"

#include "random.h"

#include <iostream>

Player::Player(string name) : name_ { name }
{
    strength_ = 60;
    std::cout << "Player " << name_ << " was constructed.\n";
}

Player::~Player()
{
    std::cout << "Player " << name_ << " is leaving scene.\n";
}

int Player::attack()
{
    int damage = strength_ + rand(-strength_/2, strength_/2);
    std::cout << "Player " << name_ << " deals " << damage << " damage.\n";
    return damage;
}

void Player::takeDamage(int damage)
{
    health_ -= damage;
    std::cout << "Player " << name_ << " takes " << damage << " damage, "
              << health_ << " health reamins.\n";
}
