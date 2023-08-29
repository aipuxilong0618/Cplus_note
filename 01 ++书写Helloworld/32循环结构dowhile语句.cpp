#include<iostream>
using namespace std;


//do{ 循环语句 } while(循环条件)

int main32() {
	//在屏幕上打出0-9
	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} 
	while (num < 10);//循环条件：num < 10


	return 0;
}
//与while循环区别在于，do...while先执行一次循环语句，再判断循环条件