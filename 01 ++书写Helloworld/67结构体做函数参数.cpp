#include<iostream>
using namespace std;

//传入方式：值传递、地址传递（60.也有写）
//创建学生结构体
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};



//值传递
void printStudent(student stu)//把学生的属性传递进去
{
	stu.age = 28;
	cout << "形参中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
}

//地址传递，用指针。其实一般都用指针，占字节少减少内存；但可能会误操作，用下一节的const
void printStudent2(student* stu)//把学生的属性地址传递进去
{
	stu->age = 28;//地址改变，值改变
	cout << "形参中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
}

int main67() {

	struct student stu;
	stu.name = "张三";
	stu.age = 20;
	stu.score = 98;

	//值传递
	printStudent(stu);//通过引入函数这么写就不用再写一行cont了
	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
	//形参改变（20-28），实参不变
	cout << endl;

	//地址传递
	printStudent2(&stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
	//形参改变（20-28），实参也改变

	return 0;
}