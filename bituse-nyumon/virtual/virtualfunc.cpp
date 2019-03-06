#include<stdio.h>

class Test{
	public:
		virtual void output(){
			printf("testdayo\n");
		}
};

class Super:public Test{
	public:
		void ouput(){
			printf("superdayo\n");
		}
};

int main(void){
	Test *test[2];
	
	test[0] = new Test;
	test[1] = new Super;

	test[0] -> output();
	test[1] -> output();

	delete test[0];
	delete test[1];

	return 0;
}
