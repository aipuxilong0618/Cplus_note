#include<iostream>
using namespace std;


int main9() {

	float f1 = 3.1415965f;  //最好加个f，否则会默认为double型，六位有效数字
	double d1 = 34.141586535;

	cout << f1 << endl;
	cout << d1 << endl;

	cout << "float  sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof = " << sizeof(d1) << endl;

	//科学计数法
	float f2 = 3e2; // 3 * 10 ^ 2 ，e后带正数，10的n次方
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;  // 3 * 0.1 ^ 2，e后带负数，10的负n次方
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}