#include<iostream>
using namespace std;


//访问数组作用：将自定义的结构体放入到数组中方便维护，语法： struct 结构体名 数组名[元素个数] = { {} , {} , ... {} }
//步骤：定义结构体-创建结构体数组-给结构体中数组赋值-遍历结构体数组

//定义结构体
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};//别忘了最后的分号！。。。

int main64() {

//创建结构体数组,给结构体中数组赋值
	struct student arr[3] =
	{
		{"张三",18,80 },
		{"李四",19,60 },
		{"王五",20,70 }
	};

//赋值(可以这么修改)
	arr[2].name = "赵六";
	arr[1].age = 30 ;

//遍历结构体数组：arr[i].name 
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << arr[i].name 
			 << " 年龄：" << arr[i].age 
			 << " 分数：" << arr[i].score << endl; //可以直接这么换行，更工整
	}


//访问指针，作用：通过指针访问结构体中的成员，利用箭头->通过结构体指针访问结构体属性
//步骤：定义结构体-通过指针指向结构体变量-通过指针访问结构体变量中的数组
	struct student stu = { "张四",20,100, };

	struct student* p = &stu;

	p->score = 80; //指针通过 -> 访问成员,修改score
//通过指针访问结构体变量中的数组:p->name
	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
	return 0;
}