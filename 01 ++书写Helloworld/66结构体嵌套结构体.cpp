#include<iostream>
using namespace std;

//作用： 结构体中的成员可以是另一个结构体
//每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体

//学生结构体定义:姓名年龄分数；
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//教师结构体定义：职工编号教师姓名教师年龄；子结构体：学生
struct teacher //需要的
{
	//成员列表
	int id; //职工编号
	string name;  //教师姓名
	int age;   //教师年龄
	struct student stu; //子结构体 学生，得先在前面定义学生的结构体
};


int main66() {
	//创建老师结构
	struct teacher t1;
	t1.id = 10000;
	t1.name = "老王";
	t1.age = 40;

	//创建老师中的学生结构
	t1.stu.name = "张三";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;

	cout << "辅导学员 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;

	return 0;
}