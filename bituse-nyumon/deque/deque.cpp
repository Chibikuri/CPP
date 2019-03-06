#include<stdio.h>
#include<deque>

using namespace std;

void func(deque<int>::iterator begin, deque<int>::iterator end) {
	for (; begin!=end;++begin){
		printf("%d, ", *begin);
	}
	printf("\n");
}

int main(void){
	deque<int> test;
	deque<int>::iterator begin, end;
	for(int i = 0; i<5;++i){
		test.push_back(i);
	}

	func(test.begin(), test.end());

	test.insert(test.begin() + 1, 100);
	func(test.begin(), test.end());
	test.erase(test.begin()+2);
	func(test.begin(), test.end());

	return 0;
}
