#include<iostream>
using namespace std;

/*
switch (表达式)

{
	case 结果1：执行语句; break;

	case 结果2：执行语句; break;
			
			
			...

	default:执行语句; break;
}
*/


int main29() {

	int score = 0;
	cout << "请给电影打分" << endl;
	cin >> score;
	cout << "您打的分数是" << score << endl;
	switch (score)
	{
	case 10:
		cout << "传奇" << endl;
		break;  //退出当前分支
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
		cout << "很好" << endl;
		break;
	case 7:
		cout << "一般" << endl;
		break;
	default: //以上选择都没有
		cout << "烂片" << endl;
		break;
	}

	return 0;
}
//switch语句中表达式类型只能是整型或者字符型,case里如果没有break退出当前分支，那么程序会一直向下执行(传奇传奇传奇传奇传奇。。)
//与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间