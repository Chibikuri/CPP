#include <iostream>
#include <time.h>
using namespace std;


int main(){
  int i;
  i = 0;
  clock_t start = clock();
  while(i < 10000000){
    cout<<i<<" "<<endl;
    i++;
  }
  clock_t end = clock();
  cout<<"duration = "<<(double)(end - start) / CLOCKS_PER_SEC <<"sec.¥n";
}
