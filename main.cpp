#include <iostream>
#include <Factory.h>
#include <NiceFactory.h>
#include <UglyFactory.h>
#include <vector>
#include <stdlib.h>

using namespace std;



void playGame(Factory *factory){

    int cnt=5;
    vector<Obstacle*> obstacle;
    for(int i=0;i<cnt;i++)
            obstacle.push_back(factory->createObstacle());
    Player  *player=factory->createPlayer();


    while(cnt>0){
       player->wander();
       int index=rand()%5;
       if(obstacle[index]->isActive()){
           player->interact(obstacle[index]);
cnt--;
       }else{
             player->wander();
       }
    }
    cout<<"game over"<<endl;

}
int main(int argc, char *argv[])
{
    Factory *factory=new NiceFactory;
    playGame(factory);
    cout<<"Level UP"<<endl;
    factory=new UglyFactory();
    playGame(factory);




    return 0;
}
