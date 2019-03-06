#include<queue>
#include<stdio.h>
using namespace std;

int main(void){
	queue<int> test;

	for(int i=0;i<5;++i){
		test.push(i);
	}

	printf("%d\n", test.back());

	test.pop();

	printf("%d\n", test.front());

	return 0;
}
