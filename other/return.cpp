#include <iostream>
#include <string>
using namespace std;

int func(){
  cout<<"i am computer"<<endl;
  return 1;
}

int main(){
  if(func()){
    cout<<"yeah"<<endl;
  }else{
    cout<<"oh"<<endl;
  }
}
