#include<iostream>

using namespace std;

class Test{
	public:
		int temp;
		static int figure;
		static void func(int a){
			figure = a;
		}
};

int Test::figure=10;

int main(void){
	printf("%d\n", Test::figure);

	Test::func(100);
	printf("%d\n", Test::figure);

	Test aaa[3];
	aaa[0].temp=1;
	aaa[1].temp=2;
	aaa[2].temp=3;

	aaa[0].figure=10;
	aaa[1].figure=11;
	aaa[2].figure=12;

	for(int i=0; i<3; ++i){
		printf("%d,", aaa[i].temp);
	}
	puts("");

	for(int i=0; i<3; ++i){
		printf("%d, ", aaa[i].figure);
	}

	puts("");
	return 0;

}


