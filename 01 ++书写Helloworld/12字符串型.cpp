#include<iostream>
using namespace std;

int main12() {
//C风格字符串： char 变量名[] = "字符串值"，以后在用hello world只用写str就行不用再写一遍
	char str1[] = "hello world"; //必须要中括号，双引号
	cout << str1 << endl;


//C++风格字符串： string 变量名 = "字符串值"
//一些老的版本要用string可能要加个头文件#include<string>，否则不能正常使用
	string str = "hello world2";
	cout << str << endl;

//system("pause"); 我记得几年前还要加个这个的，否则调试直接结束没有显示。现在才发现不用这个也行。。。

	return 0;
}
