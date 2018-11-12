#include <iostream>
#include "RakPeer.h"

int main() {

    SLNet::RakPeerInterface *server = SLNet::RakPeerInterface::GetInstance();
    SLNet::SocketDescriptor socketDescriptor(0, 0);
    if (server->Startup(2, &socketDescriptor, 1) == SLNet::RAKNET_STARTED)
        printf("RakServer started\n");
    SLNet::RakPeerInterface::DestroyInstance(server);
    return 0;
}
