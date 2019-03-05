#include<stdio.h>
class Test{
	public:
		int figure;
		void calc(int temp){
			figure= temp;
			printf("%d\n", temp);
		}
};

int main(void){
	Test *test;
	test = new Test;
	test -> calc(10);
	printf("%d\n", test->figure);
	delete test;
	return 0;
}
