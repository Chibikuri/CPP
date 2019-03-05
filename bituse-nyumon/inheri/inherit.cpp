#include<stdio.h>

class Test{
	private:
		int pv;
	protected:
		int figure;
		Test(){
			figure=10;
			pv=5;
		}
};

class Super: public Test{
	private:
		int superfigure;
	public:
		Super(void){
			superfigure=figure;
			printf("%d\n", superfigure);
		}
};

int main(void){
	Super *test;
	
	test = new Super;

	delete test;
	return 0;
}
