#include <iostream>
using namespace std;
//operation�ĺ���
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
	double distance = 1000; 	//distance ��¼ÿ����ʽ��Ŀ��ֵ�Ľӽ��̶�
	//�������Ľӽ�������
	int index, cnt = 1;
	while (cnt <= N)
	{
		int a, b;
		char op;
		cin >> a >> op >> b; 		//����ÿ����ʽ
		double res;
		res = operation(a, op, b); 		
		double temp = res - 9;    //������Ŀ��ֵ�Ľӽ��̶�
		if (temp < 0){			//���С��0��ȡ��
			temp = -temp;
		}
		if (temp < distance){			//�Ƚϵ�ǰ�Ƿ���ӽ������ǰ��ӽ��Ļ�������滻
			distance = temp;
			index = cnt;
		}
		cnt++;
	}
	cout << index << endl;
	return 0;
}
