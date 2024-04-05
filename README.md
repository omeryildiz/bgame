[![Build Status](https://travis-ci.org/omeryildiz/bgame.svg?branch=master)](https://travis-ci.org/omeryildiz/bgame)
Bgame
=====
In this game there is 1 player and several obstacles. In the game loop, a player is either wandering or interacting with an obstacle. When the obstacle the player faces is inactive, the player wanders. The game ends when all the obstacles are inactive. We are providing a main method that implements the game loop.  (This scenario is already implemented, see section Game Simulation Code)

The game has two modes: nice and ugly. In nice mode, the player is a kitten interacting with puzzles. Interacting with a puzzle means solving the puzzle. When a kitten is wandering around she sings “meow”.

In ugly mode, the player is a warrior and interacting with monsters. Interaction with a monster means fighting with the monster. In a fight, a warrior hits the monster several times and then kills it. When a warrior is wandering around he sings “of man and steel”. 

1) Abstract class Player

```

class Player{

public:

void wander(){       sing();          }

virtual void sing()=0;

virtual void interact(Obstacle * o)=0;

};
```
 

Player class will have 2 subclasses: Kitten and Warrior.

class Kitten:

  sing() method of Kitten will print “meow”  on screen.
    Have a public method void solve(Puzzle *p) which calls p->solve();
    The interact(Obstacle *o) method will call the  solve method explained above in (2).

class Warrior:

  sing() method of Warrior will print “of man and steel”  on screen.
    The interact(Obstacle *o) method will call the fight method explained below.
    Warrior has an extra member variable of type Feature as private(see below). There is a composition relationship between a warrior and a Feature instance. I.e. you need to consider creating a Feature during construction of the warrior.
 ```

struct Feature { int stamina; int strength;}
 ```

  Have a public method void fight(Monster *m) in which the warrior hits the monster several times until the strength of the warrior is greater than the stamina of the monster m. Then kill the monster. Hitting a monster means calling the Monster::hit(int n) where n is the strength of the warrior. Similarly, killing a monster is calling Monster::kill(int n) where n is the strength of the warrior

 

2) class Obstacle

Obstacle class will have 3 member variables: 1) to hold the status (active or not) 2) a static member variable that will count the number of instances. 3) id that uniquely identifies the instance.

Obstacle class will have the following 2 public methods (besides constructor)

 ```

Obstacle::Obstacle(){status=1;}

bool Obstacle:: isActive() {return status;}
```

Obstacle class will have 2 subclasses: Puzzle and Monster

class Puzzle:

  Constructor will print “New Puzzle! id:” on screen
    solve method will print “puzzle X solved! Congratulations” where X is the id of the puzzle and set the status to inactive.

class Monster:

  constructor will print “”New Monster! Id:” on screen
    void kill(int n) method will print “monster X is dead! Congratulations.” Where X is the id, and set the status to inactive. This method is public. This method throws an exception if n<= stamina.
    Monster has an extra member variable of type Feature as private (see Warrior specification). There is a composition relationship between a monster and a Feature instance. I.e. you need to consider creating a Feature during construction of the monster.
    void hit(int n) method will print “monster X says ouch!” where X is the id of the monster. This method will decrease the stamina of the monster by n/3 points.
    Have  a public int getStrength() method that returns the current strength of the monster.

3) Abstract class Factory
```

class Factory{

public:

virtual Player * createPlayer()=0;

virtual Obstacle * createObstacle()=0;

};
```

Factory class is used in the game to create Player and Obstacle instances.

Implement 2 subclasses: 1) NiceFactory class will create only Kittens and Puzzles.

2) UglyFactory will create only Warriors and Monster.

Notice that, because of these factory classes, no game can create kittens facing monsters.

USAGE:

 

Game Simulation Code

 ```
#include <cstdlib>
#include <iostream>
#include <vector>
#include “Factory.h”
using namespace std;

void playGame(Factory *factory){

/**set up the game*/

int cnt=5;

vector<Obstacle*> obstacle;

for(int i=0;i<cnt;i++)

obstacle.push_back(factory->createObstacle());

Player  *player=factory->createPlayer();

/*game loop*/

while(cnt>0){

player->wander();

int index=rand()%5;

if(obstacle[index]->isActive()){

player->interact(obstacle[index]);

cnt–;

}else{

player->wander();

}

}

cout<<“game over”<<endl;

}

int main(int argc, char *argv[])

{

Factory *factory=new NiceFactory();

playGame(factory);

cout<<“Level UP”<<endl;

factory=new UglyFactory();

playGame(factory);

system(“PAUSE”);

return 0;

}
```
