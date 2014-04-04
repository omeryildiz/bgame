#include "Monster.h"
#include <Warrior.h>
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

void Monster::hit(int n)
{
    cout<< "Monster " << getUid() << " says ouch!" << endl;
    monsters.stamina = monsters.stamina - n/2;
}

void Monster::kill(int n)
{

    try
    {
        if ( n <= monsters.stamina)
    throw 20;
    }
    catch (int e)
    {
    cout << "An exception occurred." << endl;
    }
    if(monsters.stamina == 0)
        cout<<"Monster id:"<<getUid()<<" is dead"<<endl;
}

void Monster::setMonsterFeature()
{
    /*
    cout<<"Monster stamina: ";
    cin>>monsters.stamina;
    cout<<"Monster strength: ";
    cin>>monsters.strength;
    */
    monsters.stamina = 4;
    monsters.strength = 4;
}

int Monster::getMonsterStamina()
{
    return monsters.stamina;
}
