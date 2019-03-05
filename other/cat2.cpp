#include <iostream>
#include <string>
using namespace std;

class Neko{
  string name;
public:
  Neko(string s);
  void naku() const;
};

Neko::Neko(string s):name(s){}

void Neko::naku() const{
  cout<<"my name is "<<name<<" nya"<<endl;
}

int main(){
  string s;
  cout<<"making cat"<<endl;
  cin>>s;
  Neko neko(s);
  neko.naku();
}
