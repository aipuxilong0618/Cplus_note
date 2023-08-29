#include<iostream>
using namespace std;

//语法： while(循环条件){ 循环语句 }

int main30() {
	//在屏幕上打出0-9

	int num = 0;
	while (num < 10)
	{
		cout << "num = " << num << endl;
		num++;
	}

	return 0;
}

/*  其实就是这个意思：
	int num = 0;
	cout << "num = " << num << endl;

	num1++;
	cout << "num = " << num << endl;

	num1++;
	cout << "num = " << num << endl;
	...
*/
//在执行循环语句时候，程序必须提供跳出循环的出口，否则出现死循环