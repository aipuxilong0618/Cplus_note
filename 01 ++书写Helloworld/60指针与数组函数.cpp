#include<iostream>
using namespace std;


//交换两个数的值
//以前：值传递
void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//现在：地址传递
void swap2(int* p1, int* p2)//解引用，两个指针对应的值
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}



int main60() {
	//使用指针访问第一个元素
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;  //指向数组的指针，就是它的第一个元素
	cout << "指针访问第一个元素： " << *p << endl;
	p++;//整型指针往后移四个字节
	cout << "指针访问第二个元素： " << *p << endl;
	p--;
	//利用指针遍历数组
	for (int i = 0; i < 10; i++)
	{
		
		cout << *p << endl;
		p++;
	}

	
	//指针传递函数
	int a = 10;
	int b = 20;
	swap1(a, b); // 值传递不会改变实参
	cout << "swap1中的a = " << a << endl;

	cout << "swap1中的b = " << b << endl;

	swap2(&a, &b); //取址&，地址传递会改变实参

	cout << endl;
	cout << "swap2中的a = " << a << endl;

	cout << "swap2中的b = " << b << endl;
	return 0;
}