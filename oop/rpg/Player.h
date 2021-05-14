#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {

public:
    Player(std::string name);

    Player(const Player &p) = default;
    Player& operator=(const Player &p) = default;

    Player(Player &&p) = default;
    Player& operator=(Player &&p) = default;

    virtual ~Player() = default;


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
