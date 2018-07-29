#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Omikuji{
  int un;
public:
   Omikuji(); //コンストラクタ
   void hiku();
};

Omikuji::Omikuji(){
  srand((unsigned)time( NULL ));
  cout<<"input your lucky number from 1 to 10"<<endl;
  cin>>un;
};

void Omikuji::hiku(){
  int x;
  x = rand() % 10 + 1;
  cout<<"your fotune is ";
  if (x == un){
    cout<<"so lucky"<<endl;
  }else if(x - un < 5){
    cout<<"so so"<<endl;
  }else{
    cout<<"bad"<<endl;
  }
  cout<<x<<endl;
};

int main(){
  Omikuji today;
  today.hiku();
}
