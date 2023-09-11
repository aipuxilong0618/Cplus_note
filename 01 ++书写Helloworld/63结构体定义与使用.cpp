#include<iostream>
using namespace std;

//结构体属于用户自定义的数据类型，允许用户存储不同的数据类型（string、int。。）

//语法：struct 结构体名{ 结构体成员列表 }；

/*创建变量的三种方式:
struct 结构体名 变量名  stu1.name = "张三";
struct 结构体名 变量名 = { 成员1值 ， 成员2值...}  struct student stu2 = { "李四",19,60 };
定义结构体时顺便创建变量，下面这种
*/

//创建学生类型：姓名年龄分数
struct student
{
	string name;  //姓名，字符串型
	int age;      //年龄，整型
	int score;    //分数，整型
}stu3; //结构体变量创建方式3 ，用的少


int main63() {

	//结构体变量创建方式1
	struct student stu1; //struct可以省略，写成student stu1;
	

	stu1.name = "张三";
	stu1.age = 18;
	stu1.score = 100;

	cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;

	//结构体变量创建方式2
	struct student stu2 = { "李四",19,60 };

	cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;


	stu3.name = "王五";//定义的时候写了stu3
	stu3.age = 18;
	stu3.score = 80;


	cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << endl;

	return 0;
}