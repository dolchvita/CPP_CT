#include <iostream>
using namespace std;

int main() {
	char arr[4][6];
	int y, x, flag;

	for (x = 0; x < 4; x++) {
		cin >> arr[x];
	}

	flag = 0;
	int a, b;
	a = 0;
	b = 0;
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 5; x++) {
			if (arr[y][x] == 'A') a = 1;
			else if (arr[y][x] == 'B') b = 2;
			else if (arr[y][x] == '\0') break;
			else {
				a = 0;
				b = 0;
			}
		}
	}

	/* ���� �߿� */
	if (a + b == 0) cout << "�̹߰�";
	else if (a + b < 3) cout << "�߹߰�";
	else cout << "��߰�";
	return 0;
}