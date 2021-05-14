#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {

public:
    Player();
    Player(std::string name);

    // Delete copy
    Player(const Player &p) = delete;
    Player& operator=(const Player &p) = delete;

    // Delete move
    Player(Player &&p) = delete;
    Player& operator=(Player &&p) = delete;

    virtual ~Player();


public: // name related stuff
    std::string name() const;
    virtual std::string salutation() const;

public: // health related stuff
    int health() const;
    void setHealth(int newHealth);
    bool alive() const;

public: // info utils
    static void printGameInfo();
    static void printGameInfo(int seq);
    void printPlayerInfo() const;
    void printPlayerInfo(int seq) const;

protected:
    std::string name_;
    int health_;

private:
    static int alivePlayers;
    static int createdPlayers;
};

#endif
