#include "Puzzle.h"
#include "Obstacle.h"
#include <iostream>
using namespace std;

Puzzle::Puzzle()
{

    cout<<"puzzle olustu id:"<<id<<endl;
}

Puzzle::~Puzzle()
{
    //dtor
}

void Puzzle::solve()
{

    cout<<"puzzle"<<id <<" solved! Congratulations"<<endl;
    status = false;
}
