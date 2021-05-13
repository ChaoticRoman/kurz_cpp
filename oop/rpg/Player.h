#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {

public:
    Player(std::string name);
    ~Player();

public: // name related stuff
    std::string salutation() const;

public: // health related stuff
    int health() const;
    void setHealth(int newHealth);
    bool alive() const;

public: // info utils
    static void printGameInfo();
    void printPlayerInfo();

private:
    std::string name_ = "anonymous";
    int health_;

private:
    static int alivePlayers;
    static int createdPlayers;
};

#endif
