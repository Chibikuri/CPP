#include<string>
#include<stdio.h>
#include<iostream>
using namespace std;

int main(void){
	char test[30];

	string first, last;
	first = "Ryosuke";
	last = "Sato";

	cout<<"My name is " << first << last << "." << endl;

	last[4]='h';

	cout << first.size() << endl;
	cout << last.empty() << endl;
	if (last.empty()){
		printf("hello\n");
	} else {
		printf("oh\n");
	};
	string name;
	name = first + last;
	cout << name << endl;
	return 0;
}

