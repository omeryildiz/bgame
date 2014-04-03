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

void Kitten::solve(Puzzle *p)
{
    p->solve();
}


void Kitten::interact(Obstacle *o)
{
    //todo: The interact(Obstacle *o) method will call the  solve method explained above in
    //cout<<"Engelle Karsilas ve coz"<<endl;
    //Obstacle abstract s�n�f�nda void solve() varken a�a��daki ��z�m �al���yor.
    //o->solve();
    solve(dynamic_cast<Puzzle*> (o));

}
