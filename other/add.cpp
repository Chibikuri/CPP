#include <iostream>
using namespace std;

int add(){
  int a, b;
  cout<<"input first number"<<endl;
  cin>>a;
  cout<<"input second number"<<endl;
  cin>>b;
  return a+b;
}

int main(){
  int c = add();
  cout<<c<<endl;
}
