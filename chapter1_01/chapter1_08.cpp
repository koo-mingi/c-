#include "1.h"

//int a;
//
//void add(int i) {
//	if (i >= 10) {
//		return; // ȣ��� ������ ���ư�.
//	}
//		i++;
//		a++;
//		cout << a << endl;
//		add(i); // ��� ȣ��
//	
//}
//
//int main() {
//	add(0);
//	cout << "���� ����� : " << a << endl;
//}

//========================================================================

//void countNum(int num) {
//	if (num == 1) {
//		cout << "Num : " << num << endl;
//		return;
//	}
//	else {
//		cout << "Num : " << num << endl;
//		countNum(--num);
//		//countNum(num--); : num--�� �ϸ� ���ҵ��� ���� ���·� �Լ��� ���� ������ ���� ���� �ɸ�
//	}
//}
//
//int main() {
//	countNum(5);
//	return 0;
//}

//========================================================================

//void countNum(int num) {
//	for (int i = num; i > 0; i--) {
//		cout << "Num : " << i << endl;
//	}
//	
//}
//
//int main() {
//	countNum(5);
//	return 0;
//}

//========================================================================

//void countNum(int num) {
//	while (num > 0) {
//		cout << "Num : " << num << endl;
//		num--;
//	}
//
//}
//
//int main() {
//	countNum(5);
//	return 0;
//}

//========================================================================

// ���丮�� ���ϱ�. ����Լ�
int num;
long long factorial(int n, long long f, long long s) {
	if (n == num) {
		return s;
	}
	else {
			n++;
			f = f * n;
			s = s + f;
			cout << "n ="<<n<<" f = "<<f<<" s = "<< s<<endl;
			factorial(n,f,s);
	}
}

int main() {
	int n = 1;
	long long f = 1; // �ڿ��� n�� ���� factorial���� ����.
	long long s = 1; // �ڿ����� ������ ���� ����.
	long long result; // ����� �ޱ�.
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> num;

	result = factorial(n,f,s);
	cout << "�� �� : " << result;
	return 0;
}