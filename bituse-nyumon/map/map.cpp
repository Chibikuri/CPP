#include<stdio.h>
#include<map>

using namespace std;

void func(map<int, const char*>::iterator begin, map<int, const char*>::iterator end){
	for(; begin!=end;++begin){
		printf("%d, ", (*begin).first);
		printf("%s\n", (*begin).second);
	}

	printf("\n");
}
int main(void){
	map<int,const char*> test;
	map<int,const char*>::iterator it, begin, end;

	test.insert(make_pair(1, "abcde"));
	test.insert(make_pair(2, "fghij"));
	test.insert(make_pair(3, "klmno"));
	
	test.insert(make_pair(3, "pqstu"));

	func(test.begin(), test.end());
	begin = test.begin();
	end = test.end();

	it = test.find(2);

	printf("key is %s\n", (*it).second);

	return 0;
}

