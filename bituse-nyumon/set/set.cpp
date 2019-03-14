#include<stdio.h>
#include<set>

using namespace std;

void func(set<int>::iterator begin, set<int>::iterator end){
	for (; begin!=end;++begin){
		printf("%d,", (*begin));
	}
	printf("\n");
}

int main(void){
	set<int> test;
	set<int>::iterator it;

	for(int i=0; i<5; ++i){
		test.insert(i);
	}

	func(test.begin(), test.end());

	it = test.find(3);
	printf("%d\n", *it);

	test.erase(it);

	func(test.begin(), test.end());

	return 0;
}
