#include<iostream>
using namespace std;

int main() {
//C风格字符串： char 变量名[] = "字符串值"，以后在用hello world只用写str就行不用再写一遍
	char str1[] = "hello world";
	cout << str1 << endl;


//C++风格字符串： string  变量名 = "字符串值"
	string str = "hello world";
	cout << str << endl;

	system("pause");

	return 0;
}
