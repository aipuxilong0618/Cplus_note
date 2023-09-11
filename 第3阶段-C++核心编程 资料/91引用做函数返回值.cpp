#include<iostream>
using namespace std;

//作用：引用作为函数的返回值,不要返回局部变量引用；函数调用可以作为左值（可以修改的值，也可以理解成在等号左边的值）


//不要返回局部变量引用
int& test01() {
	int a = 10; //局部变量，int&表示用引用的方式进行返回，此处表示创建一个局部变量并且用引用的方式返回这个变量
	return a;
}

//函数调用可以作为左值
int& test02() {
	static int a = 20;//静态变量，存在在全局区，数据在程序结束后由系统释放
	return a;
}

int main91() {

	//不能返回局部变量的引用
	int &ref = test01();//ref就是上面的那个a的别名
	cout << "ref = " << ref << endl;//第一次对，因为编译器进行了保留
	cout << "ref = " << ref << endl;//第二次错，因为a是局部变量，执行完毕后已经释放

	//函数调用可以作为左值
	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;

	cout << "ref2 = " << ref2 << endl;//ref2返回的是a的引用，变量返回后等于一千，相当于做了一个a=1000的引用
	cout << "ref2 = " << ref2 << endl;

	return 0;
}


//后面还有一个常量引用，const int& ref = 10，防止误操作的，和结构体const student* stu一个意思，就不写了