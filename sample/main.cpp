#include<iostream>
#include"sample.h"

using namespace std;

int main(){
	CSample obj;
	int num;
	cout <<"Input integer"<< endl;
	cin >> num;
	obj.set(num);
	cout << obj.get() << endl;
	return 0;
}

