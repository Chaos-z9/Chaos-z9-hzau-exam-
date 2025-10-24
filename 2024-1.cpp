/*
题目描述
给出 n(1≤n≤20)，输出杨辉三角的前 n 行。
输入输出样例
输入 6
输出
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/
#include <iostream>
using namespace std;
int main()
{
	int arr[20][100];
	arr[0][0] = 1;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		arr[i][0] = 1;//初始化
		arr[i][i] = 1;//初始化
		for(int j = 1; j<i ;j++)//j-1,因为刚刚已经初始化过了
		{ 
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (arr[i][j] != 0)
			{
				cout << arr[i][j] << " ";//空格
			}
		}
		cout << endl;//换行
	}
	return 0;
}