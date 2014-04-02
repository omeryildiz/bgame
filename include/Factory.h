#include <Player.h>
#include <Obstacle.h>
#ifndef FACTORY_H
#define FACTORY_H


class Factory
{
    public:
        Factory();
        virtual ~Factory();
        virtual Player* createPlayer()=0;
        virtual Obstacle* createObstacle()=0;
    protected:
    private:
};

#endif // FACTORY_H
