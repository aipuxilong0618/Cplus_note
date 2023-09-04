#include<iostream>
using namespace std;

/*函数语法：

返回值类型 函数名 （参数列表）
{

       函数体语句

       return表达式

}
*/
//定义一个加法函数，实现两个数相加

//定义的函数单独拿出来写，不能写进int(main)中

int add49(int num1, int num2)   //返回值为整型，函数名为add，传入两个整型数据
{
	int sum = num1 + num2;    //计算数据相加结果并定义为sum，整型变量
	return sum;				  //输出sum的值，数据类型与返回值类型挂钩；
	//若不返回值，使用void
}

/*
所谓值传递，就是函数调用时实参将数值传入给形参
值传递时，形参发生改变，并不会影响实参
*/


//定义函数swap，两个数字交换
void swap49(int num1, int num2) //函数不返回值，使用void
{
	int temp = num1;
	num1 = num2;
	num2 = temp;

	//return ; 使用void时，不需要返回值，可以不写return，或只写一个return;
}

//函数的调用：函数名（参数）
int main49()
{
	int a = 10;
	int b = 10;
	//调用add函数
	int sum = add49(a, b);//调用时的a，b有值，称为实际参数，简称实参； num1和num2无值，称为形式参数，简称形参
	cout << "sum = " << sum << endl;

	a = 100;
	b = 100;

	sum = add49(a, b);
	cout << "sum = " << sum << endl;

	int c = 10;
	int d = 20;

	swap49(c, d);

	cout << "main中的 c = " << c << endl;
	cout << "main中的 d = " << d << endl;
	//值传递时，形参发生改变，并不会影响实参，即a=10,b=20不变
	return 0;
}



