#include<stack>
#include<stdio.h>

using namespace std;

int main(void){
	stack<int> test;
	for(int i=0; i<5;++i){
		test.push(i);

	}

	printf("%d\n", test.top());

	test.pop();

	printf("%d\n", test.top());

	return 0;
}
