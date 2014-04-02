#include "Obstacle.h"
#include <iostream>
using namespace std;
//unsigned int Obstacle::id = 0;
int Obstacle::newUid = 0;
Obstacle::Obstacle():uid(newUid++)
{
    //id = id++;
    status = true;
}

Obstacle::~Obstacle()
{
    //dtor
}

bool Obstacle::isActive()
{
    return status;
}

int Obstacle::getUid()
{
    return uid;
}

