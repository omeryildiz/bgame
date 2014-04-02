#include "Warrior.h"
#include <Feature.h>
#include <iostream>
using namespace std;

Warrior::Warrior(int n,int m)
{
    feature.stamina = n;
    feature.strength = m;

}

Warrior::~Warrior()
{
    //dtor
}

void Warrior::sing()
{
    cout<<"of man and steel"<<endl;
}

void Warrior::interact(Obstacle* o)
{

}

void Warrior::fight(Monster* o)
{

}
