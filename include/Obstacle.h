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
        int getUid();

    protected:
        //static unsigned int id;
    private:
        const int uid;
        static int newUid;


};

#endif // OBSTACLE_H
