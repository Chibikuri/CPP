#include <iostream>
#include <string>
using namespace std;

class Cat{
  string name;
  int hp;
public:
  Cat(string s):name(s), hp(10){};
  int eat();
  int naku();
};

int Cat::eat(){
  cout<<name<<" wants to eat."<<endl;
  cout<<"Please input the number(how much do you want to give)"<<endl;
  int food;
  cin>>food;
  hp += food;
  return hp;
};

int Cat::naku(){
  cout<<"nyaa"<<endl;
  hp -= 5;
  return hp;
};

int main(){
  cout<<"make cat"<<endl;
  string temp;
  cin >> temp;
  Cat kai_neko(temp);
  cout<<endl;
  for(int i = 0; i < 5;i++){
    cout<<"How do you do?"<<endl;
    cout<<"1, give food 2, nothing"<<endl;
    int ans;
    cin>>ans;
    if(ans == 1){
      int t;
      t = kai_neko.eat();
      cout<<"Now, the hp is "<<t<<endl;
    }else if(ans == 2){
      int t;
      t = kai_neko.naku();
      cout<<"Now, the hp is "<<t<<endl;
      if(t < 0){
        cout<<"food is shortage."<<endl;
        break;
      }
    }
  }
  cout<<"end"<<endl;
};
