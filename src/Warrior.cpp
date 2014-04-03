#include "Warrior.h"
#include <iostream>
using namespace std;
Warrior::Warrior()
{
    setWarriorFeature();
}

Warrior::~Warrior()
{
    //dtor
}

void Warrior::setWarriorFeature()
{
    cout<<"Warrior stamina: ";
    cin>>warrior.stamina;
    cout<<"Warrior strength: ";
    cin>>warrior.strength;
}

int Warrior::getWarriorStamina()
{
    return warrior.stamina;
}

int Warrior::getWarriorStrength()
{
    return warrior.strength;
}

void Warrior::sing()
{
    cout<<"of man and steel"<<endl;
}

void Warrior::interact(Obstacle *o)
{

}
