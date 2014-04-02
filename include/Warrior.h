#ifndef WARRIOR_H
#define WARRIOR_H


class Warrior:public Player
{
    public:
        Warrior();
        virtual ~Warrior();
        void sing();
        void interact(Obstacle *o);
        struct Feature feature;
    protected:
    private:
};

#endif // WARRIOR_H
