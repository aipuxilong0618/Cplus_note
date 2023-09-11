#include<iostream>
using namespace std;

/*
本教程主要利用C++来实现一个通讯录管理系统

系统中需要实现的功能如下：

添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
显示联系人：显示通讯录中所有联系人信息
删除联系人：按照姓名进行删除指定联系人
查找联系人：按照姓名查看指定联系人信息
修改联系人：按照姓名重新修改指定联系人
清空联系人：清空通讯录中所有信息
退出通讯录：退出当前使用的通讯录

*/

//要将其设为启动项目
int main() {

	cout << "懒得写了" << endl;
/*
完成思路：
1.创建菜单：用户选择功能的界面
		封装函数显示该界面 如 void showMenu()，直接cout << "*****" << endl 这么写
		在main函数中调用封装好的函数
2.退出功能：根据用户不同的选择，进入不同的功能
		可以选择switch分支结构，将整个架构进行搭建；当用户选择0时候，执行退出，选择其他先不做操作，也不会退出程序，写在主函数中
3.添加联系人：实现步骤：
		设计联系人结构体：struct Person{string m_Name; int m_Sex; int m_Age; string m_Phone; string m_Addr}; 
		设计通讯录结构体：struct Addressbooks（定义最大容量#define MAX 1000）{struct Person personArray[MAX]；int m_Size};
		main函数中创建通讯录：Addressbooks abs;abs.m_Size = 0;
		封装添加联系人函数：void addPerson(Addressbooks *abs)，if-else;cout-cin;abs->m_Size++;
4.显示联系人：void showPerson(Addressbooks * abs)，if-else(for,cont);system("pause")、system("cls");
5.删除联系人：把检测联系人是否存在封装成一个函数中，如果存在，返回联系人在通讯录中的位置，不存在返回-1：
		封装检测联系人是否存在（int isExist(Addressbooks * abs, string name)，return i、-1）
		封装删除联系人函数（cin，void deletePerson(Addressbooks * abs)，abs->m_Size--;）：
6.查找联系人：void findPerson(Addressbooks * abs)，int ret = isExist(abs, name)判断是否存在，通过ret != -1判断并输出abs->personArray[ret].m_Name
7.修改联系人：void modifyPerson(Addressbooks * abs)，int ret = isExist(abs, name)判断是否存在，存在再修改
8.清空联系人：void cleanPerson(Addressbooks * abs)，abs->m_Size = 0（将当期记录的联系人数量记为零）;	



*/



}