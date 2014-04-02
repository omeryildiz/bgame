#include "Obstacle.h"
#include <iostream>
using namespace std;
unsigned int Obstacle::id = 0;
Obstacle::Obstacle()
{
    id = id++;
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

