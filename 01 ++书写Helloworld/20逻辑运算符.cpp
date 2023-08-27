#include<iostream>
using namespace std;


int main20() {
//逻辑运算符  --- 与&&，两个都为真

	int a2 = 10;
	int b2 = 10;

	cout << (a2 && b2) << endl;// a3、b3=10(只要不为零就为真)，结果为1

	a2 = 10;
	b2 = 0;

	cout << (a2 && b2) << endl;// 0 

//逻辑运算符  --- 或 ||其中一个为真

	int a3 = 10;
	int b3 = 10;

	cout << (a3 || b3) << endl;// 1

	a3 = 10;
	b3 = 0;

	cout << (a3 || b3) << endl;// 1 

//逻辑运算符  --- 非!，假

	int a1 = 10;

	cout << !a1 << endl; // a1不等于10，假，0

	cout << !!a1 << endl; //双重否定a1=10，真，1

	return 0;
}