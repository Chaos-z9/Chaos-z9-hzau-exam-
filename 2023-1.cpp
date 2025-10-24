/*
题目描述：​​
输入一个正整数 n（1 ≤ n ≤ 1000），表示接下来要输入的数字个数。接着输入 n个整数。
你的任务是将这 n个整数进行分类，分别统计其中​​正数​​、​​负数​​和​​零​​的个数，并按照以下格式输出：
positive:正数个数
negative:负数个数
zero:零的个数
输入样例：​
5
-5 0 3 -2 0
输出样例：​
positive:1
negative:2
zero:2
*/
#include<iostream>
using namespace std;
int main()
{
	int len;
	int arr[1000];
	int mark[3] = {0};
	cin >> len;
	for (int i = 0; i < len; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > 0)
		{
			mark[0]++;
	    }
		else if (arr[i] < 0)
		{
			mark[1]++;
		}
		else if (arr[i] == 0)
		{
			mark[2]++;
		}
	}
	cout << "positive:" << mark[0] << endl;
	cout << "negative:" << mark[1] << endl;
	cout << "zero:" << mark[2] << endl;
	return 0;
}
