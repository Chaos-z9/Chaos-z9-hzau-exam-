//字符串回文数字
//数组版
//#include<iostream>
//using namespace std;
//int main()
//{
//	int revnum[100] = { 0 };
//	int count = 0;
//	for (int i = 0; i < 100; i++)
//	{
//    cin>>revnum[i];
//	count++;
//	}
//	cout << count;
//	return 0;
//}
//BYD数组不好用（容量不确定），还是得用字符串
//对撞指针版
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int len = str.size();
	int right = str.size() - 1;
	int left = 0;
	int count = 0;
	while (left < right)
	{
		if (str[left] != str[right])
		{
			cout << "error" << endl;
			count++;
			break;
		}
		left++;
		right--;
	}
	if (count == 0)
	{
		cout << "right" << endl;
	}
	return 0;
}
