#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Hero{
  int hp;
public:
  Hero():hp(100){};
  int getHP(){return hp;}
  void attack(int n);
  void attacked(int n);
};

void Hero::attack(int n){
    cout<<"I will kill you!"<<endl;
    hp -= n
    if(hp >= 0){
      cout<<"now my hp is "<<hp<<"."<<endl;
    }else{
      cout<<"you lose"<<endl;
    }
};

void Hero::attacked(int n){
  cout<<"uh.."<<endl;
  hp -= n;
  if(hp >= 0){
    cout<<"now, my hp is "<<hp<<endl;
  }else{
    cout<<"you lose"<<endl;
  }
};

class Demon{
  int hp;
public:
  Demon():hp(100){};
  int getHP(){return hp};
  void attack(int n);
  void attacked(int n);
};

void Demon::attack(int n){
  cout<<"ha ha ha ha ..."<<endl;
  hp -= n;
  if(hp < 0){
    cout<<"you win"<<endl;
  }
};

void Demon::attacked(int n){
  cout<<"uh u u u u ..."<<endl;
  hp -= n;
  if(hp < 0){
    cout<<"you win"<<endl;
  }
};

class Battle_Place(){
  Demon bu;
  Hero you;
  bu_place;
  your_place;
public:
  Battle_Place();
  void battle();
  void battle_roop();
};

Battle_Place::Battle_Place(){
  srand((unsigned)time(NULL));
  bu_place = rand() % 5 + 1;
  cout<<"battle of you and bu"<<endl;
  cout<<"bu is in somewhere from 1 to 5"<<endl;
  while(true){
    cin>>your_place;
    if(your_place >= 1 &&5)
  }
};

void Battle_Place::Battle_Place(){
  int place, attack
}
