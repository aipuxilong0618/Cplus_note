#include<iostream>
using namespace std;

//常用几个转义字符：\n 换行(LF) ，将当前位置移到下一行开头，\\ 代表一个反斜线字符"\"，\t 水平制表符 （跳到下一个TAB位置，占八个位置，看起来整齐）

int main11() {

	cout << "hello world\n" << endl;

	cout << "\\" << endl;

	cout << "aaa\tHello" << endl;
	cout << "aaaaaa\tHello" << endl;

	system("pause");

	return 0;
}