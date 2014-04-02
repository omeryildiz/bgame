#include <Player.h>
#include <Puzzle.h>
#include <Obstacle.h>
#ifndef KITTEN_H
#define KITTEN_H


class Kitten:public Player
{
    public:
        Kitten();
        virtual ~Kitten();
        void sing();
        void interact(Obstacle* o);
    protected:
    private:
};

#endif // KITTEN_H
