#include <iostream>
using namespace std;

int main() {
	char arr[3][11];
	int flag;

	for (int i = 0; i < 3; i++) cin >> arr[i];

	flag = 0;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (arr[y][x] == '\0') break;
			else if (arr[y][x] == 'M')
			{
				flag = 1;
				break;
			}
		}
	}

	if (flag == 1) cout << "M�� �����մϴ�";
	else cout << "M�� �������� �ʽ��ϴ�";

	return 0;
}