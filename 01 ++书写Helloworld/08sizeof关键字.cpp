#include<iostream>  //单行注释（这个是基本，开头结尾所有的都要写）
using namespace std;

//语法： sizeof(数据类型:int / 变量:number)

int main8() {
	short number1 = 10;

	cout << "number1 类型所占内存空间为： " << sizeof(number1) << endl;

	cout << "short 类型所占内存空间为： " << sizeof(short) << endl;

	cout << "int 类型所占内存空间为： " << sizeof(int) << endl;

	cout << "long 类型所占内存空间为： " << sizeof(long) << endl;

	cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;

	system("pause");

	return 0;
}