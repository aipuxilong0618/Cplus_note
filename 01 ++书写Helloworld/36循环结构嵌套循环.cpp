#include<iostream>
using namespace std;

int main36() {
	//在循环体中再嵌套一层循环，解决一些实际问题
	//外层循环执行1次，内层循环执行1轮
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* " ;//*后加个空格可以让两个*之间空一格
		}
		cout << endl;//换行处理
	}

	return 0;
}