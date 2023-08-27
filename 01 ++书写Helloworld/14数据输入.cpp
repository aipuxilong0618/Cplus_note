#include<iostream>
using namespace std;


//语法：cin >> 变量
int main14() {

	//整型输入
	int a = 0;
	cout << "请输入整型变量：" << endl;
	cin >> a; //主要代码，a的初值是零，这里直接在键盘上给它赋个其他值
	cout << "输入的变量是" << a << endl;

	//浮点型输入
	double d = 0;
	cout << "请输入浮点型变量：" << endl;
	cin >> d;
	cout << d << endl;

	//字符型输入
	char ch = 0;
	cout << "请输入字符型变量：" << endl;
	cin >> ch;
	cout << ch << endl;

	//字符串型输入
	string str;
	cout << "请输入字符串型变量：" << endl;
	cin >> str;
	cout << str << endl;

	//布尔类型输入
	bool flag = true;
	cout << "请输入布尔型变量：" << endl; //对布尔值而言，除了零是负值以外其他都是正值，即这个输入非零值输出的都是一
	cin >> flag;
	cout << flag << endl;
	system("pause");
	return EXIT_SUCCESS;
}