#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << "��������������������������20��������-1����" << endl;
	int arr[21];
	for (int i = 0; i < 20; i++)
	{
		cin >> arr[i];
		if (i == 0 && arr[i] <= 0)
		{
			cout << "����Ч����" << endl;
			break;
		}
		if (i > 0 && arr[i] <= 0)
		{
			arr[i] = 0;
			break;
		}
	}
	cout << "������Ҫ�����������" << endl;
	int cha;
	cin >> cha;
	cout << "����������Ϊ��" << endl;
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