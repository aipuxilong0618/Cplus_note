#include<iostream>
using namespace std;

//1. 值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "值传递形参a:" << a << "  值传递形参b:" << b << endl;
}

//2. 地址传递
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "地址传递形参a:" << *a << "  地址传递形参b:" << *b << endl;
}
//以前的两种传递，形参都变，一个实参变一个不变
//3. 引用传递：与地址传递结果一样，可以简化指针修改实参
void mySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "引用传递形参a:" << a << "  引用传递形参b:" << b << endl;
}

int main90() {

	int a[3] = { 10,10,10 };
	int b[3] = { 20,20,20 };

	mySwap01(a[0], b[0]);
	cout << "值传递实参a:" << a[0] << "  值传递实参b:" << b[0] << endl;//a,b实参不发生改变，形参不修饰实参

	mySwap02(&a[1], &b[1]);
	cout << "地址传递实参a:" << a[1] << "  地址传递实参b:" << b[1] << endl;//a,b实参发生改变

	//本来写的int a = 10，int b = 10，但结果总是不对。发现原因是在mySwap02运行后就把a和b的地址反了，再运行mySwap03又回去了。。。感谢弹幕提醒
	mySwap03(a[2], b[2]);//下面a是上面a的别名，只不过别名和原名起的一样，使用的地址一样，其实就是地址传递。。。只是不用指针了
	cout << "引用传递实参a:" << a[2] << "  引用传递实参b:" << b[2] << endl;//a,b实参发生改变

	return 0;
}