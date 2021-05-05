#include "Packet.h"
#include "PingPacket.h"
#include "PongPacket.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<Packet*> packets;

    char c;
    while (1)
    {
        cin >> c;

        if (c == 'q') break;

        switch (c)
        {
        case '0':
            packets.push_back(new PingPacket);
            break;
        case '1':
            packets.push_back(new PongPacket);
            break;
        default:
            cout << "Invalid packet\n";
        }
    }

    for (auto packet: packets)
    {
       packet->type();
       delete packet;
    }

    return 0;
}
