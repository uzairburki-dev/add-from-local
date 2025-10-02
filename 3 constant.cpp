#include<iostream>
using namespace std;
int main(){
	const int a=23;
	const float b=534;
	const char c='g';
	const bool d= 1;
	
//	int a=24  /*compiler will show error because 'a'  is constant.
//	float b=34; b is also a float constant.
//	char c='e'; c is also a character constant.
//	bool d="false"; d is a boolen constnat.
	cout<<a<<b<<c<<d;
	return 0;
}