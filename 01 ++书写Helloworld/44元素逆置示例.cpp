#include<iostream>
using namespace std;

int main44() {
	int arr[5] = { 1,3,2,5,4 };
	cout << "开始的数组是 " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}

	//逆置过程：
	//记录起始下标位置——结束下标位置——两个下标元素互换——起始位置++，结束位置-- ——循环，直到起始位置>=结束位置
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1; //得出最后一个数，这么写利于数组延伸而非固定数组数量

	while (start < end) {
		int tmp = arr[start];
		arr[start] = arr[end]; 
		arr[end] = tmp;
		start++;
		end--;
	
	} //此时才执行互换
	cout << "现在的数组是" << endl;
	for (int i = 0; i < 5; i++) {
		cout <<  arr[i] << endl;
	}
		


return 0;
}
