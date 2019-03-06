#include<vector>
#include<stdio.h>
using namespace std;

void func(vector<int>::iterator begin, vector<int>::iterator end){
		for (; begin != end; ++ begin){
				printf("%d, ", *begin);
				}
		printf("\n");
}

int main(void){
	vector<int> test;
	vector<int>::iterator begin, end;
	test.push_back(10);
	printf("%d\n", test[0]);

	test.push_back(20);
	begin=test.begin();
	end=test.end();
	func(begin, end);
	test.pop_back();
	begin=test.begin();
	end=test.end();
	func(begin, end);
	return 0;
}
