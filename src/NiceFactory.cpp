#include "NiceFactory.h"
#include <Kitten.h>

NiceFactory::NiceFactory()
{
    //ctor
}

NiceFactory::~NiceFactory()
{
    //dtor
}

 Player* NiceFactory::createPlayer()
{
    return new Kitten;

}

Obstacle* NiceFactory::createObstacle()
{
    return new Puzzle;
}
