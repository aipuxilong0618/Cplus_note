#include<iostream>
using namespace std;

/*
案例描述：

学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下:

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

最终打印出老师数据以及老师所带的学生数据。

*/

/*
步骤：创建学生结构体、老师结构体—通过函数给老师赋值—通过函数给学生赋值—打印出老师数据以及老师所带的学生数据
*/

//创建结构体
struct Student
{
	string name;
	int score;
};
struct Teacher
{
	string name;
	Student sArray[5];
};

//通过函数赋值
void allocateSpace(Teacher tArray[], int len)
{
	
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		string tName = "教师";
		tArray[i].name = tName + nameSeed[i];//字符串操作，对老师命名为教师+nameSeed字符串中的第几个元素，教师ABC
		//上面那行也可以写成：
		// tArray[i].tName = "教师";
		// tArray[i].tName += nameSeed[i]；

		for (int j = 0; j < 5; j++)
		{
			string sName = "学生";
			tArray[i].sArray[j].name = sName + nameSeed[j];
			tArray[i].sArray[j].score = rand() % 61 + 40; //随机分配学生的分数，%61表示输出在0-60，加四十表示输出在40-100之间
		}
	}
}
//打印所有信息
void printTeachers(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名:" << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
		}//\t表示转义字符，和老师的多个间隔
	}
}

int main90() {

	srand((unsigned int)time(NULL)); //随机数种子 头文件 #include <ctime>

	struct Teacher tArray[3]; //老师数组

	int len = sizeof(tArray) / sizeof(Teacher);

	allocateSpace(tArray, len); //创建数据，带入自己计算出的长度len

	printTeachers(tArray, len); //打印数据


	return 0;
}