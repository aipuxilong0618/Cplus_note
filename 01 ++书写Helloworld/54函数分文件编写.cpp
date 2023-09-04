#include<iostream>
using namespace std;
#include "swap54.h"

/*函数的分文件编写
作用：让代码结构更加清晰

函数分文件编写一般有4个步骤:

1.创建后缀名为.h的头文件（swap54.h）
2.创建后缀名为.cpp的源文件（54函数分文件编写）
3.在头文件中写函数的声明(void)
4.在源文件中写函数的定义(具体表达)
*/


//函数的定义
void swap54(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//上面的函数定义也可以另写一个cpp文件，用的时候直接输下面一段
int main54() {

	int a = 10;
	int b = 20;
	swap54(a, b);

	return 0;
}