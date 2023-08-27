#include<iostream>
using namespace std;

//加减乘除
int main15() {

	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;  //两个整数(int)相除结果依然是整数，去除小数部分，10/20=0；两个小数(double float)可以相除，除数不能为零；


	int a2 = 10; //取余  除数也不能为0，两个小数不可以取模；除不过，10%20结果还是10
	int b2 = 3;

	cout << a2 % b2 << endl; 

	//单独a++和++a结果一样，a=a+1,区别：
	int a3 = 10;
	int b3 = ++a3 * 10; //前置递增先对变量进行++，再计算表达式(先算a3=11，再算b3=110)
	cout << "a3的值是" << a3 << endl;
	cout << b3 << endl;

	int a4 = 10;
	int b4 = a4++ * 10; //后置递增先计算表达式，后对变量进行++(先算出b4=100，再算a3=11)
	cout << "a4的值是" << a4 << endl;
	cout << b4 << endl;

	system("pause");

	return 0;
}