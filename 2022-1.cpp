#include<iostream>
#include<string>
using namespace std;
int main()
{
	//让用户输入字符串
	cout<<"请输入一个字符串：";
	string str;
	string ansstr;
	cin >> str;
	//先统一大小写（小写）
	int size = str.size();
	for (int i = 0; i < size; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z') // 判断是否为大写字母
		{
			str[i] = str[i] - 'A' + 'a'; // 转为小写
		}
	}
	//统计出现次数
	int ans[26] = {0}; // 用于存储每个字母出现的次数
	for (int i = 0; i < size; i++)
	{
    ans[str[i] - 'a']++; // 统计字母出现次数
	}
	//输出结果
	for (int i = 0; i < 25; i++)
	{
		if (ans[i] == 1)
		{
			ansstr += (char)(i + 'a');
		}
	}
	cout << ansstr << endl;
	//最后排序
	return 0;
}