#include<stdio.h>

class Test{
	public:
		int figure;
			Test(int temp){
				figure = temp;
			}
			~Test(){
				printf("destructor\n");
			}
};

int main(void){
	Test *test;
	test = new Test(50);
	printf("%d\n", test->figure);
	delete test;
	return 0;
}
