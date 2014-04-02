#ifndef UGLYFACTORY_H
#define UGLYFACTORY_H


class UglyFactory
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
