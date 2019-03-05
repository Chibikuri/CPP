#include <iostream>
#include <string>
using namespace std;

class Car{
private:
  string name;
public:
  Car(string cars){
    name = cars;
  }
  void intro(){
    cout<<"this car is "<<name<<"."<<endl;
  }
};

int main(){
  string s;
  cout<<"what is the cat name?"<<endl;
  cin >> s;
  Car ranbo(s); //the ranbo is made
  cout<<"the ranbo is made"<<endl;
  ranbo.intro();
}
