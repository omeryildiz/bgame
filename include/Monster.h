#include <Obstacle.h>
#include <Feature.h>
#ifndef MONSTER_H
#define MONSTER_H


class Monster:public Obstacle
{
    public:
        Monster();
        virtual ~Monster();
        void kill(int n);
        void hit(int n);
        void setMonsterFeature();
        int getMonsterStrength();
        int getMonsterStamina();
        struct Feature monsters;
        void solve();
    protected:
    private:
};

#endif // MONSTER_H
