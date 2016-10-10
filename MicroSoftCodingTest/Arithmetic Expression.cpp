#include <iostream>
using namespace std;
//operation的函数
double operation(int a, char op, int b)
{
	double result;
	if (op == ' + '){
		result = a + b;
	}
	else if (op == ' - '){
		result = a - b;
	}
	else if (op == '*'){
		result = a * b;
	}
	else {
		result = (double)a / (double)b;
	}
	return result;
}
int main(void)
{
	int N;
	cin >> N;
	double distance = 1000; 	//distance 记录每组表达式与目标值的接近程度
	//保存最后的接近的索引
	int index, cnt = 1;
	while (cnt <= N)
	{
		int a, b;
		char op;
		cin >> a >> op >> b; 		//输入每组表达式
		double res;
		res = operation(a, op, b); 		
		double temp = res - 9;    //计算与目标值的接近程度
		if (temp < 0){			//如果小于0则取反
			temp = -temp;
		}
		if (temp < distance){			//比较当前是否最接近如果当前最接近的话则进行替换
			distance = temp;
			index = cnt;
		}
		cnt++;
	}
	cout << index << endl;
	return 0;
}
