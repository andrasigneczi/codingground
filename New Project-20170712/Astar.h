#ifndef _ASTAR_H
#define _ASTAR_H

#include "Connection.h"
#include <vector>
#include <string>

class Astar {

public:
    void addConnection( Connection c );
    vector<Connection> seachTheBestWay( vector<string> stops );
    
private:
    vector<Connection> mConnections;
};

#endif // ASTAR
