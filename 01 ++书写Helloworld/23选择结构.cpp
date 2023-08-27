#include<iostream>
using namespace std;

int main() {

	//选择单行格式if语句：if
	//输入一个分数，如果分数大于600分，视为考上大学，并在屏幕上打印

	int score1 = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score1; //输入一个数并将其赋值为score

	cout << "您输入的分数为： " << score1 << endl;

	//if语句
	//注意事项，在if判断语句后面，不要加分号，否则不管是否满足条件后面代码都会执行
	if (score1 > 600)
	{
		cout << "我有学上了！" << endl;
	}


	//执行多行格式if语句：if-else
	int score2 = 0;

	cout << "请输入考试分数：" << endl;

	cin >> score2;

	if (score2 > 481)
	{
		cout << "我考上了一本大学" << endl;
	}
	else
	{
		cout << "我未考上一本大学" << endl;
	}

	//执行多条件的if语句：if-else if-else if-else
	int score3 = 0;

	cout << "请输入考试分数：" << endl;

	cin >> score3;

	if (score3 > 600)
	{
		cout << "我考上了一本大学" << endl;
	}
	else if (score3 > 500)
	{
		cout << "我考上了二本大学" << endl;
	}
	else if (score3 > 400)
	{
		cout << "我考上了三本大学" << endl;
	}
	else
	{
		cout << "我未考上本科" << endl;
	}

	return 0;
}