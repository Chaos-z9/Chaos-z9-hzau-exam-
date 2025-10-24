/*题目二：将输入的字符串按照每三位添加一个逗号的方式格式化成千位分隔符形式的数字，如果输入的字符串不是纯数字，则输出 false*/
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int len = str.length();
	int count = 0;
	bool flag = true;
	for (int i = len; i > 0; i--)
	{
		count++;
		if (str[i - 1] < '0' || str[i - 1] > '9')
		{
			flag = false;
			break;
		}
		if (count == 3 && i != 1)
		{
			str[i] = str[i] + ',';//字符插入错误，设立结果字符串
		}
	}
	if (flag)
	{
		for (int i = 0; i < str.length(); i++)
		{
			cout << str[i];
		}
	}
	else
	{
		cout << "false";
	}
	return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    bool flag = true;

    // 1. 检查是否全为数字
    for (char c : str) {
        if (c < '0' || c > '9') {
            flag = false;
            break;
        }
    }

    if (!flag) {
        cout << "false";
        return 0;
    }

    // 2. 从右向左每3位插入逗号
    string result;
    int count = 0;

    for (int i = str.size() - 1; i >= 0; i--) {
        result = str[i] + result; // 将当前数字加到结果前面
        count++;

        // 每3位加逗号（除非是最后一位）
        if (count % 3 == 0 && i != 0) {
            result = ',' + result;
        }
    }

    cout << result;
    return 0;
}