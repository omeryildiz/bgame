#include <Player.h>
#include <Feature.h>
#ifndef WARRIOR_H
#define WARRIOR_H


class Warrior:public Player
{
    public:
        Warrior();
        virtual ~Warrior();
        void sing();
        void interact(Obstacle *o);
        void setWarriorFeature();
        int getWarriorStamina();
        int getWarriorStrength();
    protected:
    private:
        struct Feature warrior;
};

#endif // WARRIOR_H
