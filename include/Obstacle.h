#ifndef OBSTACLE_H
#define OBSTACLE_H


class Obstacle
{
    public:
        Obstacle();
        virtual ~Obstacle();
        bool isActive();
        bool status;
        virtual void solve()=0;

    protected:
        static unsigned int id;
    private:


};

#endif // OBSTACLE_H
