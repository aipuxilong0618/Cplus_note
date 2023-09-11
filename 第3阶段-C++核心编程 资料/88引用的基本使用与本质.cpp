//本阶段主要针对C++面向对象编程

//前面还讲了内存分区模型（代码区、全局区、栈区、堆区四种，要我说写在int main()前的就是全局变量在全局区，写在里面的就是局部变量在栈区）

#include<iostream>
using namespace std;

//引用：给变量起别名；语法：数据类型& 别名 = 原名  int& b = a
//引用注意事项:引用必须初始化（不能直接int& b）、引用在初始化后不可以改变（在int& b = a后再int &b = c，可以赋值b = c）

//引用的本质在c++内部实现是一个指针常量.

//发现是引用，转换为 int* const ref = &a;

	int main88() {

		int a = 10;
		int& b = a;  //用b去访问a所在内存

		cout << "a = " << a << endl;
		cout << "b = " << b << endl; //b的值为a的值

		b = 100;

		cout << "a = " << a << endl;
		cout << "b = " << b << endl;//a的值为修改后b的值

		int c = 5 ;
		int& ref = c; //自动转换为 int* const ref = &c，相当于写了一个指针，指针名为ref，所存数据为c的地址，const修饰表示指针指向固定。
		//指针常量是指针指向不可改，也说明为什么引用不可更改
		
		ref = 20; //内部发现ref是引用，编译器自动帮我们转换为: *ref = 20;正常使用指针要解引用的
		cout << "c:" << c << endl;
		cout << "ref:" << ref << endl;
		return 0;
	}
