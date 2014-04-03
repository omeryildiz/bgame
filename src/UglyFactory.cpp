#include "UglyFactory.h"
#include <Warrior.h>
#include <Monster.h>

UglyFactory::UglyFactory()
{
    //ctor
}

UglyFactory::~UglyFactory()
{
    //dtor
}
Player* UglyFactory::createPlayer()
{
    return new Warrior;
}

Obstacle* UglyFactory::createObstacle()
{
    return new Monster;
}
