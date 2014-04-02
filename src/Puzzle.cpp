#include "Puzzle.h"
#include "Obstacle.h"
#include <iostream>
using namespace std;

Puzzle::Puzzle()
{

    cout<<"puzzle olustu id:"<<getUid()<<endl;
}

Puzzle::~Puzzle()
{
    //dtor
}

void Puzzle::solve()
{

    cout<<"puzzle "<<getUid() <<" solved! Congratulations"<<endl;
    status = false;
}
