#include<iostream>
using namespace std;

int main10() {

	char ch = 'a'; //必须要是单引号，只能引用一个字符，创建字符型变量，a 97 A 65
	cout << ch << endl;
	cout << sizeof(char) << endl;

	cout << (int)ch << endl;  //查看字符a对应的ASCII码，将字符型将转为整型
	ch = 97; //可以直接用ASCII给字符型变量赋值
	cout << ch << endl;

	system("pause");

	return 0;
}
