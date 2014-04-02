#include <Factory.h>
#include <Player.h>
#include <Obstacle.h>
#ifndef NICEFACTORY_H
#define NICEFACTORY_H


class NiceFactory:public Factory
{
    public:
        NiceFactory();
        virtual ~NiceFactory();
        Player* createPlayer();
        Obstacle* createObstacle();
    protected:
    private:
};

#endif // NICEFACTORY_H
