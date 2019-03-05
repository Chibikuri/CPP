#include <iostream>
#include <string>
using namespace std;

class Rocket{
  int energy;
  int speed;
public:
  Rocket(int);
  void kasoku();
};

Rocket::Rocket(int x):energy(x),speed(0){};

void Rocket::kasoku()
  if (energy >= 2){
    speed += 2;
    energy -= 2;
    cout<<"now, the energy is "<<energy<<" left."<<endl;
    cout<<"now, the peed is "<<speed<<" km/h"<<endl;
  }else{
    cout<<"the energy is run over"<<endl;
  }
};

int main(){
  cout<<"make rocket on memory"<<endl;
  int n;
  cin>>n;

  Rocket falcon(n);
  cout<<"speed up"<<endl;
  falcon.kasoku();
  cout<<"speed up"<<endl;
  falcon.kasoku();
  cout<<"speed up"<<endl;
  falcon.kasoku();
  cout<<"finished"<<endl;
}
