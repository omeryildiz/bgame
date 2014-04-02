#include <Feature.h>
#include <Player.h>
#ifndef WARRIOR_H
#define WARRIOR_H


class Warrior
{
    public:
        Warrior(int n,int m);
        virtual ~Warrior();
        void sing();
        void interact(Obstacle* o);
    protected:
    private:
        Feature feature;
};

#endif // WARRIOR_H
