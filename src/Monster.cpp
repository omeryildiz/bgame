#include "Monster.h"
#include <iostream>
using namespace std;

Monster::Monster()
{
    cout<<"Monster olustu id:"<<getUid()<<endl;
    setMonsterFeature();
}

Monster::~Monster()
{
    //dtor
}

void Monster::kill(int n)
{
    /*
    try
    {
        if (n<= Warrior.getWarriorStamina())
    throw 20;
    }
    catch (int e)
    {
    cout << "An exception occurred. Exception Nr. " << e << '\n';
    }
    */
    cout<<"Monster id:"<<getUid()<<" is dead"<<endl;
}

void Monster::setMonsterFeature()
{
    cout<<"Monster stamina: ";
    cin>>monsters.stamina;
    cout<<"Monster strength: ";
    cin>>monsters.strength;
}

void Monster::solve()
{
    cout<<"This is a error, don't care about this"<<endl;
}
