#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char vect[6] = { "GHOST" };
	char arr[11];
	cin >> arr;

	int cnt = 0;
	int len = strlen(arr);

	for (int i = 0; i < len; i++)
	{
		if (arr[i] == vect[cnt]) cnt++;
	}

	if (cnt == 5) cout << "����";
	else cout << "�������� ����";

	return 0;
}