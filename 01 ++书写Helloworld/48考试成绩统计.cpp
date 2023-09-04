#include<iostream>
using namespace std;


//输出三名同学的总成绩
int main48() {

	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};

	string names[3] = { "张三","李四","王五" }; //定义字符串，一维数组

	for (int i = 0; i < 3; i++) //矩阵形式可以用两个循环输出
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];  //sum = sum + [i][j] = sum + [i][0] + sum + [i][1] + sum + [i][2],输出当前列元素，即一个学生的总成绩
		}
		cout << names[i] << "同学总成绩为： " << sum << endl;
	}


	return 0;
}