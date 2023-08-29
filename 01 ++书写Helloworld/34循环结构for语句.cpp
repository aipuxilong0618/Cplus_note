#include<iostream>
using namespace std;

// for(起始表达式;条件表达式;末尾循环体) { 循环语句; }
// for循环用的相对更多，结构更清晰

int main34() {

	for (int i = 0; i < 10; i++)// 分号分割，for(i=0开始;若i<10;i=i+1)
	{
		cout << i << endl;
	}

//for里面的三个条件都可以不写，改成：
/*
	int i = 0;
	for ( ; ; )
	{
	if (i >=10)
	{
		break;
	}
	cout << i << endl;
	i++;
	}
*/
	


	return 0;
}
