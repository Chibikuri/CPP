#include <iostream>
#include <string>
using namespace std;

int main(){
  string name;
  int nen;
  cout<<"こんにちは"<<endl;
  cout<<"who are you?"<<endl;
  cin>>name;
  cout<<name<<"さん"<<"ですね"<<endl;
  cout<<"how old are you?"<<endl;
  cin>>nen;
  if (nen < 20){
    cout<<"お若いですね！"<<endl;
  }else{
    cout<<"へえ"<<endl;
  }
}
