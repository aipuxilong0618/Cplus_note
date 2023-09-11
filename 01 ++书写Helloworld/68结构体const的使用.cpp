#include<iostream>
using namespace std;


//作用：占字节少减少内存；但可能会误操作，用const来防止:在student* stu前加一个const
//创建学生结构体
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//const使用场景
void printStudent(const student* stu) //加const防止函数体中的误操作，只能读不能写
{
	//stu->age = 100;  操作失败，因为加了const修饰,会报错
	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;

}

int main68() {
	//创建结构体变量
	student stu = { "张三",18,100 };

	printStudent(&stu);

	return 0;
}