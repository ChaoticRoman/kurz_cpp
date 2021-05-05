#include "Packet.h"

#include <iostream>

class PingPacket : public Packet
{
    void type() {
        std::cout << "Ping\n";
    }
};
