#include <Obstacle.h>
#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        virtual ~Player();
        void wander();
        virtual void sing()=0;
        virtual void interact(Obstacle* o)=0;
    protected:
    private:
};

#endif // PLAYER_H
