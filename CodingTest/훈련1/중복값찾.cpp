#include <iostream>
#include <cstring>
using namespace std;

int isPattern(int fam[3]) {
	int cnt = 0;
	int lv = 1;

	return 0;
}

int main() {
	int arr[6];
	int dat[10] = { 0 };
	int flag = 0;

	for (int i = 0; i < 6; i++) cin >> arr[i];
	for (int i = 0; i < 6; i++) dat[arr[i]]++;

	for (int i = 0; i < 10; i++) {

		if (dat[i] >= 2)
		{

			flag = 1;
			break;
		}
	}

	if (flag == 1) cout << "���ð��� �߰�";
	else cout << "�̹߰�";
	return 0;
}