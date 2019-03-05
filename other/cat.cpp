#include <iostream>
#include <string>
using namespace std;

class Neco{
private:
  string name;
public:
  Neco(string s){
    name = s;
  }
  void naku(){
    cout<<"my name is "<<name<<"."<<endl;
  }
};

int main(){
  Neco dora("boss");
  cout<<"メモリ上に生成"<<endl;
  dora.naku();
}
