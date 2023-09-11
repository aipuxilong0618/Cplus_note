#include<iostream>
using namespace std;

/*
空指针：指针变量指向内存中编号为0的空间，用于初始化指针变量

注：空指针和野指针都不是我们申请的空间，因此不要访问
*/

int main57() {

	//指针变量p指向内存地址编号为0的空间
	int* p1 = NULL; //NULL表示零
 
	//内存编号0 ~255为系统占用内存，此处访问零，不允许用户访问
	//cout << *p << endl;  访问空指针会报错 

//野指针
	//指针变量p指向内存地址编号为0x1100的空间
	int* p2 = (int*)0x1100;

	//访问野指针报错 
	//cout << *p << endl;  访问空指针会报错

//const修饰指针：三种情况，
// const修饰指针-- - 常量指针     const   *
// const修饰常量-- - 指针常量     *  const
// const即修饰指针，又修饰常量    const   *   const     const后跟哪个，哪个不能修改（取*操作、取p操作）
				
	int a = 10;
	int b = 10;

	//const修饰指针，指针指向可以改，指针指向的值不可以更改
	const int* p3 = &a;  //常量指针写法
	p3 = &b; //修改指针指向为b，正确
	//*p1 = 100;  对于p指向内存，对p1指向内存的值进行修改，将a的值改为100，报错


	//const修饰常量，指针指向不可以改，指针指向的值可以更改
	int* const p4 = &a;
	//p2 = &b; //错误
	*p4 = 100; //正确

	//const既修饰指针又修饰常量，两个都不可以改
	const int* const p5 = &a;
	//p3 = &b; //错误
	//*p3 = 100; //错误

	cout << "Hello world" << endl;
	return 0;
}