#include<iostream>
using namespace std;

//函数常见样式:int,void两种格式
// 
//1、 无参无返(没有参数传递，没有返回值)
void test01()
{
	cout << "this is test01" << endl;

}

//2、 有参无返
void test02(int a)
{
	cout << "this is test02" << endl;
	cout << "a = " << a << endl;
}

//3、无参有返
int test03()
{
	cout << "this is test03 " << endl;
	return 10;
}

//4、有参有返
int test04(int a, int b)
{
	cout << "this is test04 " << endl;
	int sum = a + b;
	return sum;
}
/*函数的声明
作用： 告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。

函数的声明可以多次，但是函数的定义只能有一次
*/


//声明，先告诉编辑器函数max52存在别报错，只有函数名、参数列表
//可以把定义的函数具体名称写在后面
int max52(int a, int b);
int max52(int a, int b); //声明可以写多次，定义（最后那个）只能写一次


int main52() {

	test01();//调用
	test02(10);

	int num1 = test03();//返回值为十，num1为10;有返回值的需要先定义一下返回值的初值
	cout << "num1 = " << num1 << endl;

	int sum = test04(1, 2);
	cout << "sum = " << sum << endl;

	int a = 10;
	int b = 20;

	cout << max52(a, b) << endl;

	return 0;
}

//定义
int max52(int a, int b)
{
	return a > b ? a : b;//三目运算符
}