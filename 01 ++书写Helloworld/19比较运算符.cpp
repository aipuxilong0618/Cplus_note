#include<iostream>
using namespace std;

int main19() {

	int a = 10;
	int b = 20;

	cout << (a == b) << endl; // 假，为0，加小括号表示优先级，先判断括号里面的，不加括号运行不了

	cout << (a != b) << endl; // 真，为1

	cout << (a > b) << endl; // 0

	cout << (a < b) << endl; // 1

	cout << (a >= b) << endl; // 0

	cout << (a <= b) << endl; // 1

	system("pause");

	return 0;
}