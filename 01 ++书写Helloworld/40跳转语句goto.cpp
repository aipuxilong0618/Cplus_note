#include<iostream>
using namespace std;

//goto语句:可以无条件跳转语句:goto 标记；不推荐使用
int main40() {

	cout << "1" << endl;

	goto FLAG; //执行完cout << "1" << endl，直接跳转到FLAG对应的地方，执行cout << "5" << endl

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;

	FLAG:

	cout << "5" << endl;

	return 0;
}
