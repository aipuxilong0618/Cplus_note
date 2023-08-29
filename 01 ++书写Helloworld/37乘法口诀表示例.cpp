#include<iostream>
using namespace std;

int main37() {
	for (int i = 1; i <= 9; i++) {

		for (int j = 1; j <= i; j++) {

			cout << j << "*" << i << "=" << i * j << " "; //最后的<< ""目的是加一个空格
		}
		cout << endl;


	}
	return 0;
}