#include <Kitten.h>
#include <Obstacle.h>
#include <Puzzle.h>
#include <iostream>

using namespace std;

Kitten::Kitten()
{
    cout<<"Kedi olustu"<<endl;
}

Kitten::~Kitten()
{
   cout<<"Kedi oldu"<<endl;
}
void Kitten::sing()
{
    cout<<"meow meow"<<endl;
}

void Kitten::interact(Obstacle* o)
{
    //todo: The interact(Obstacle *o) method will call the  solve method explained above in
     //cout<<"Engelle Karsilas ve coz"<<endl;
    //o->solve();
    o->solve();


}
