#include <iostream>
using namespace std;

int vect[2][5] = {
		3, 2, 6, 2, 4,
		1, 4, 2, 6, 5
};

int kfc(int target) {
	int y, x;
	for (y = 0; y < 2; y++) {
		for (x = 0; x < 5; x++) {
			if (vect[y][x] == target) return 1;
		}
	}
	return 0;
}

int main() {
	int target, result;
	cin >> target;
	result = kfc(target);
	if (result == 1) cout << "���� �����մϴ�";
	else cout << "���� �����ϴ�";
	return 0;
}