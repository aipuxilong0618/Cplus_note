#include<iostream>
using namespace std;

int main31() 
{
	
	srand((unsigned int)time(NULL));//利用当前时间生成随机数，老版可能需要加头文件#include<ctime>
	int num = rand() % 100 + 1; 
	cout << "随机数是" << num << endl;
	int val = 0;
	while (1) //一直循环
	{		
		cout << "请输入一个数字" << endl;
		cin >> val;
		cout << "输入的数是" << val << endl;

		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "猜测正确" << endl;
			break;  //在循环中，可以利用break退出当前循环
		}
	}

	
	return 0;
}