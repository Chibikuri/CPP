#include <iostream>
using namespace std;

class Glass{
  int nakami;
public:
  Glass():nakami(10){};
  void dasu(){
    if(nakami >= 0){
      nakami -= 2;
      cout<<"pour the water"<<endl;
      cout<<"in the glass "<<nakami<<" is left"<<endl;
    }else{
      cout<<"finished"<<endl;
    }

  }
};

int main(){
  Glass glass;
  cout<<"made glass"<<endl;
  cout<<"glass dasu"<<endl;
  glass.dasu();
  glass.dasu();
  glass.dasu();
  glass.dasu();
  glass.dasu();
  glass.dasu();
  cout<<"finish"<<endl;

}
