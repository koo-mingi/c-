#include "1.h"

int max(int a, int b);

/* c++�� �������� ����, ������ ����� ���� �Լ��� ���������� ������,
	main���� �Լ��� �θ��� ���Ѵ�.
	�̷��� �Լ����¸� <������ Ÿ��>�̶�� �Ѵ�.
*/

void main() {
	int m, n, res;
	cout << "���� �� ���� �Է��ϼ��� : ";
	cin >> m >> n;
	res = max(m, n);
	cout << "MAX : " << res<<endl;
}

int max(int a, int b) {

	if (a > b) return a;
	else return b;
}