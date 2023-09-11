#include<iostream>
using namespace std;

//指针的作用： 可以通过指针间接访问内存；指针就是地址

int main55() {

	//1、指针的定义
	int a = 10; //定义整型变量a

	//指针定义语法： 数据类型 * 变量名 ;
	int * p; //指针point，所以一般简写为p，整型变量，所以定义整型指针

	//指针变量赋值
	p = &a; //指针指向变量a的地址，&：取址符号
	cout << &a << endl; //打印数据a的地址，一个十六进制数
	cout << p << endl;  //打印指针变量p，就是a的地址

	//2、指针的使用：通过解引用的方式找到指针指向的内存：在指针前面加*
	cout << "*p = " << *p << endl;

	*p = 1000;//通过p找到内存，通过*p修改内存a为1000
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
	
	//3、指针所占空间：32位(x86)四个字节，64位八个字节
	int b = 10;

	int* t;
	t = &b; //指针指向数据a的地址

	cout << *t << endl; //* 解引用
	cout << sizeof(t) << endl;
	cout << sizeof(*t) << endl;
	cout << sizeof(char*) << endl;  //64位（x64)下都为八个字节，可以在debug那里改
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	return 0;
}