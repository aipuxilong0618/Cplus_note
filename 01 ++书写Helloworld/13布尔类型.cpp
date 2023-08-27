#include<iostream>
using namespace std;

int main13() {

	bool flag = true; //创建bool数据类型
	cout << flag << endl; // 1

	flag = false;
	cout << flag << endl; // 0

	cout << "size of bool = " << sizeof(bool) << endl; //查看所占空间：1个字节 

	system("pause");

	return 0;
}