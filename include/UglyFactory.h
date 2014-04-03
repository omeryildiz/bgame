#include <Factory.h>
#ifndef UGLYFACTORY_H
#define UGLYFACTORY_H


class UglyFactory:public Factory
{
    public:
        UglyFactory();
        virtual ~UglyFactory();
        Player* createPlayer();
        Obstacle* createObstacle();
    protected:
    private:
};

#endif // UGLYFACTORY_H
