#include<iostream>
using namespace std;
//常量：不可更改的量
//1、宏常量：#define 宏常量：常量名 常量值，通常在文件上方定义 ，表示一个常量
#define day 7   //不加分号

int main4() {

	cout << "一周里总共有 " << day << " 天" << endl;

	//2、const修饰变量（本来是变量month，改成常量了）
	const int month = 12;
	cout << "一年里总共有 " << month << " 个月份" << endl;
	
	system("pause");

	return 0;
}

//05关键字：C++中预先保留的单词（标识符），在定义变量或者常量时候，不要用关键字
/*
06标识符命名规则:标识符不能是关键字;int
标识符只能由字母、数字、下划线组成;_12as asc
第一个字符必须为字母或下划线;
标识符中字母区分大小写;
建议：给标识符命名时，争取做到见名知意的效果，方便自己和他人的阅读 int sum = num1 + num2                                      
*/
