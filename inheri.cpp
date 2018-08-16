#include <iostream>
#include <string>
using namespace std;

class Neco{
  string name;
public:
  Neco(string s);
  void naku() const;
};

Neco::Neco(string s):name(s){};

void Neco::naku() const{
  cout<<"i am "<<name<<endl;
}


class SalaryNeco:public Neco{
  int gekkyu;
public:
  SalaryNeco(string s, int n):Neco(s), gekkyu(n){}
  int get_nensyu() const{return gekkyu * 12;}
  void syokyu(){gekkyu++;}
};

int main(){
  cout<<"making salary cat please input the name."<<endl;
  string temp;
  cin >> temp;
  cout<<"input the first salary of that neco"<<endl;
  cout<<"input the half-width alphanumeric"<<endl;
  int syoninkyu;
  cin>>syoninkyu;
  SalaryNeco dora(temp, syoninkyu);
  while(1){
    cout<<"choose one of four"<<endl;
    cout<<"1. naku, 2.view nensyu, 3.up salary, 4.stop"<<endl;
    int ans;
    cin>>ans;
    if(ans==1){
      dora.naku();
    }else if(ans==2){
      cout<<"now the salary is "<<dora.get_nensyu()<<endl;
    }else if(ans==3){
      dora.syokyu();
      cout<<"get more salary"<<endl;
    }else{
      break;
    }
    cout<<endl;
  }
  cout<<"end"<<endl;
};
