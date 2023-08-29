#include<iostream>
using namespace std;


// break语句: 用于跳出选择结构或循环结构
/*出现在switch条件语句中，作用是终止case并跳出switch  :前面写过
* 
  出现在循环语句中，作用是跳出当前的循环语句：
  
  出现在嵌套循环中，跳出最近的内层循环语句：
  
  if (i == 5)
		{
			break; //跳出循环语句
		}

  */

//continue语句：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
int main38() {

	for (int i = 0; i < 100; i++)//输出100个数-只输出偶数
	{
		if (i % 2 == 1)
		{
			continue; //如果i是奇数，执行到本行代码，不继续执行了，即不进行cout << i << endl输出，继续循环；
			          //如果是break：结果只有一个零，因为到1后直接跳出循环
		}
		cout << i << endl;
	}

	return 0;
}

//注意：continue并没有使整个循环终止，而break会跳出循环
