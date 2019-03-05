#include<iostream>
#include"class.h"
using namespace std;
class Test2{
	public:
		void calc(int temp){
			if(temp<=3){
				printf("%d\n", temp);
			}else{
				cout<<"temp must be less than 3"<<endl;
			}
		}
};

int main(void){
	cout<<"input number"<<endl;
	Test2 test;
	int ane;
	cin>>ane;
	test.calc(ane);
	return 0;
}
