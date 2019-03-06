#include<list>
#include<stdio.h>
using namespace std;

void func(list<int>::iterator begin, list<int>::iterator end){
	for(;begin != end;++begin){
		printf("%d, ", *begin);
	}

	printf("\n");
}

int main(void){
	list<int> test, test2;
	list<int>::iterator begin, end;
	for(int i = 0; i<10; ++i){
		test.push_back(i);
	}
	func(test.begin(), test.end());
	test.pop_front();
	func(test.begin(), test.end());
	test.push_front(5);
	func(test.begin(), test.end());

	test.remove(5);
	func(test.begin(), test.end());

	test.push_front(25);
	test.push_front(30);

	func(test.begin(), test.end());
	test.sort();

	test2.push_back(50);
	test2.push_back(100);

	test.merge(test2);
	func(test.begin(), test.end());

	//test.sort(greater<int>());
	func(test.begin(), test.end());
	return 0;
}


