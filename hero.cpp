#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Hero{
  int power;
public:
  Hero():power(100){}
  void attack(int n);
  void attacked(int n);
};

void Hero::attack(int n){
  cout<<"I'll kill you!"<<endl;
  cout<<"!!!"<<endl;
  power -= n;
  if(power >= 0){
    cout<<"now, the power is "<<power<<endl;
  }else{
    cout<<"you lose"<<endl;
  }
};

void Hero::attacked(int n){
  cout<<"you should be dead"<<endl;
  cout<<"!!!"<<endl;
  power -= n;
  if(power >= 0){
    cout<<"now, the power is "<<power<<endl;
  }else{
    cout<<"you lose"<<endl;
  }
};

class Demon{
  int power;
public:
  Demon():power(100){}
  void attack(int n);
  void attacked(int n);
};

void Demon::attack(int n){
  cout<<"ha ha ha you will be dead!"<<endl;
  power -= n;
  if(power < 0){
    cout<<"uh...."<<endl;
    cout<<"I used over power"<<endl;
    cout<<"you win"<<endl;
  }
};

void Demon::attacked(int n){
  cout<<"you have no power"<<endl;
  power -= n;
  if(power < 0){
    cout<<"uh..."<<endl;
    cout<<"you win"<<endl;
  }
};


class Place{
  Demon Bu;
  Hero you;
  int place_bu;
  int place_you;
public:
  Place();
  void match();
};

Place::Place(){
  srand((unsigned)time(NULL));
  place_bu = rand() % 5 + 1;
  cout<<"start!"<<endl;
  cout<<"bu is hidding and you have to hide."<<endl;
  cin>>place_you;
};

void Place::match(){
  int place, att;
  cout<<"your turn"<<endl;
  cout<<"input 1 to 5"<<endl;
  cin>>place;
  cout<<"how much power do you use to attack?(1 to 100)"<<endl;
  cin>>att;
  cout<<endl;
  you.attack(att);
  if(place_bu==place){
    Bu.attacked(att*2);
  }else{
    cout<<"your attack is failed"<<endl;
  }
  cout<<endl;
  cout<<"demon's turn"<<endl;
  cout<<"press enter"<<endl;
  cin.sync();
  cin.get();
  place=rand()%5+1;
  att=rand()%100+1;
  if(place_you==place){
    you.attacked(att*2);
  }else{
    cout<<"counter attack is failed"<<endl;
  }
};

int main(){
  Place anywhere;
  anywhere.match();
}
