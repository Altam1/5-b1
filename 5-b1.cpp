#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << "请输入任意个正整数（升序，最多20个），以-1结束" << endl;
	int arr[21];
	for (int i = 0; i < 20; i++)
	{
		cin >> arr[i];
		if (i == 0 && arr[i] <= 0)
		{
			cout << "无有效输入" << endl;
			break;
		}
		if (i > 0 && arr[i] <= 0)
		{
			arr[i] = 0;
			break;
		}
	}
	cout << "请输入要插入的正整数" << endl;
	int cha;
	cin >> cha;
	cout << "插入后的数组为：" << endl;
	for (int i = 0; i < 20; i++)
	{
		if (arr[i] == 0)
			break;
		else
		{
			if (i == 0 && arr[i] >= cha)
			{
				cout << cha << " " << arr[i] << " ";
			}
			else
			{
				if (cha > arr[i] && cha <= arr[i + 1])
				{
					cout << arr[i] << " " << cha << " ";
				}
				else
				{
					cout << arr[i] << " ";
				}
			}
			
		}
	}
	cout << endl;
	return 0;
}