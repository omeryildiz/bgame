#include "Warrior.h"
#include <Monster.h>
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
    /*
    cout<<"Warrior stamina: ";
    cin>>warrior.stamina;
    cout<<"Warrior strength: ";
    cin>>warrior.strength;
    */
    warrior.stamina = 4;
    warrior.strength = 4;
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

void Warrior::fight(Monster *m)
{
    //Monster'in dayanma gucu sýfýr olana kadar vur.
    while(m->getMonsterStamina() != 0)
    {
        m->hit(warrior.strength);
    }

    if(m->getMonsterStamina() == 0)
        m->kill(warrior.strength);
}

void Warrior::interact(Obstacle *o)
{
    fight(dynamic_cast<Monster*> (o));
}
