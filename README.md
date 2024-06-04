# BGame

**BGame** is a project developed to illustrate object-oriented programming (OOP) principles through a simple text-based adventure game. Players navigate through different rooms, collect various items, and interact with characters to solve puzzles and progress through the game's storyline. This project demonstrates practical applications of OOP concepts such as inheritance, polymorphism, encapsulation, and abstraction.

## Overview

BGame is a simple yet illustrative project designed to demonstrate key concepts of object-oriented programming (OOP) such as inheritance, polymorphism, encapsulation, and abstraction. This project provides a practical example of how these principles can be applied to create a functional game.

## Game Description

In this game, there is 1 player and several obstacles. In the game loop, a player is either wandering or interacting with an obstacle. When the obstacle the player faces is inactive, the player wanders. The game ends when all the obstacles are inactive. We provide a main method that implements the game loop (see section Game Simulation Code).

The game has two modes: nice and ugly.

- **Nice Mode**: The player is a kitten interacting with puzzles. Interacting with a puzzle means solving the puzzle. When a kitten is wandering around, she sings “meow”.
- **Ugly Mode**: The player is a warrior interacting with monsters. Interaction with a monster means fighting with the monster. In a fight, a warrior hits the monster several times and then kills it. When a warrior is wandering around, he sings “of man and steel”.

### Abstract class Player

```cpp
class Player {
public:
    void wander() { sing(); }
    virtual void sing() = 0;
    virtual void interact(Obstacle* o) = 0;
};
```

- **Kitten**:
  - `sing()` method of Kitten will print “meow” on screen.
  - Has a public method `void solve(Puzzle *p)` which calls `p->solve()`.
  - The `interact(Obstacle *o)` method will call the solve method.

- **Warrior**:
  - `sing()` method of Warrior will print “of man and steel” on screen.
  - The `interact(Obstacle *o)` method will call the fight method.
  - Warrior has an extra member variable of type `Feature` as private.

### Feature Struct

```cpp
struct Feature {
    int stamina;
    int strength;
};
```

- Has a public method `void fight(Monster *m)` where the warrior hits the monster several times until the strength of the warrior is greater than the stamina of the monster. Then, kill the monster.

### Class Obstacle

Obstacle class has three member variables:
1. Status (active or not)
2. A static member variable that counts the number of instances.
3. ID that uniquely identifies the instance.

```cpp
class Obstacle {
public:
    Obstacle() { status = 1; }
    bool isActive() { return status; }

private:
    bool status;
    static int instanceCount;
    int id;
};
```

Obstacle class has two subclasses: Puzzle and Monster.

- **Puzzle**:
  - Constructor prints “New Puzzle! id:” on screen.
  - `solve` method prints “puzzle X solved! Congratulations” and sets the status to inactive.

- **Monster**:
  - Constructor prints “New Monster! Id:” on screen.
  - `void kill(int n)` method prints “monster X is dead! Congratulations.” Sets the status to inactive.
  - Throws an exception if `n <= stamina`.
  - Monster has an extra member variable of type `Feature` as private.
  - `void hit(int n)` method prints “monster X says ouch!” and decreases the stamina of the monster by `n / 3` points.
  - Has a public method `int getStrength()` that returns the current strength of the monster.

### Abstract class Factory

```cpp
class Factory {
public:
    virtual Player* createPlayer() = 0;
    virtual Obstacle* createObstacle() = 0;
};
```

Factory class is used in the game to create Player and Obstacle instances. 

- **NiceFactory**: Creates only Kittens and Puzzles.
- **UglyFactory**: Creates only Warriors and Monsters.

### Game Simulation Code

```cpp
#include <cstdlib>
#include <iostream>
#include <vector>
#include "Factory.h"
using namespace std;

void playGame(Factory* factory) {
    // Set up the game
    int cnt = 5;
    vector<Obstacle*> obstacle;
    for (int i = 0; i < cnt; i++) {
        obstacle.push_back(factory->createObstacle());
    }
    Player* player = factory->createPlayer();

    // Game loop
    while (cnt > 0) {
        player->wander();
        int index = rand() % 5;
        if (obstacle[index]->isActive()) {
            player->interact(obstacle[index]);
            cnt--;
        } else {
            player->wander();
        }
    }
    cout << "game over" << endl;
}

int main(int argc, char* argv[]) {
    Factory* factory = new NiceFactory();
    playGame(factory);
    cout << "Level UP" << endl;
    factory = new UglyFactory();
    playGame(factory);
    system("PAUSE");
    return 0;
}
```

## Getting Started

To get a copy of the project up and running on your local machine, follow these simple steps.

### Prerequisites

Ensure you have the following installed:
- Git
- A C++ compiler (e.g., GCC)
- Make

### Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/omeryildiz/bgame.git
   ```
2. Navigate to the project directory:
   ```sh
   cd bgame
   ```
3. Build the project:
   ```sh
   make
   ```

### Running the Game

After building the project, you can run the game using the following command:
```sh
./bgame
```

## Project Structure

The project is organized as follows:

- `src/`: Contains the source code files.
- `include/`: Contains the header files.
- `assets/`: Contains game assets such as images and sounds.
- `Makefile`: Script to build the project.

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your improvements.


## Contact

For more information, feel free to contact the project maintainer at [Omer Yildiz](https://www.omeryildiz.org).
```

Bu güncellenmiş README.md dosyasını kullanarak GitHub'daki `bgame` reposunu güncelleyebilirsiniz. Başka bir ekleme veya değişiklik yapmak isterseniz lütfen belirtin.
