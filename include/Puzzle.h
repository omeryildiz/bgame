#include <Obstacle.h>
#ifndef PUZZLE_H
#define PUZZLE_H


class Puzzle:public Obstacle
{
    public:
        Puzzle();
        virtual ~Puzzle();
        void solve();


};
#endif // PUZZLE_H
