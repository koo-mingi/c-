#include<iostream>
using namespace std;

void main() {
	//int a,b;
	//cout << "ù��° ���ڸ� �Է��ϼ��� : ";
	//cin >> a;
	//cout << "�ι�° ���ڸ� �Է��ϼ��� : ";
	//cin >> b;
	//cout << "a = " << a << endl << "b = " << b << endl;
	//cout << "�� ���� �߿��� �� ū ����? "<<endl;
	//a > b ? cout << a << "��(��) �� ũ��" << endl // ���� ���
	//	  : cout << b << "��(��) �� ũ��" << endl; // ������ ���


	//int i, j, k, max, min;
	//cout << "���� 3���� �Է��ϼ��� : ";
	//cin >> i>> j>> k;

	//// �ִ밪
	///*(i > j) ? ((i > k) ? max = i : max = k)
	//	: ((j > k) ? max = j : max = k);*/

	//// �ִ밪 �ٸ� ���
	//max = i;
	//max < j ? max = j : max;
	//max < k ? max = k : max;
	//cout << "max = " << max << endl;

	//// �ּҰ�
	///*(i < j) ? ((i < k) ? min = i : (min = k))
	//	: ((j < k) ? min = j : min = k);*/

	//// �ּҰ� �ٸ� ���
	//min = i;
	//min > j ? min = j : min;
	//min > k ? min = k : min;
	//cout << "min = " << min << endl;

	/*int n, n1, n2, n3, n4, n5;
	cout << "�ټ��ڸ� ���� �Է� �ϼ��� : ";
	cin >> n;
	cout << n << "��" << endl;
	n1 = n / 10000;
	n2 = (n % 10000) / 1000;
	n3 = (n % 1000) / 100;
	n4 = (n % 100) / 10;
	n5 = n % 10;
	cout << "����¥�� : " << n1 << endl;
	cout << "õ��¥�� : " << n2 << endl;
	cout << "���¥�� : " << n3 << endl;
	cout << "�ʿ�¥�� : " << n4 << endl;
	cout << "�Ͽ�¥�� : " << n5 << endl;*/

	int n, n1, n2, n3, n4, n5,n6,n7;
	cout << "�ټ��ڸ� ���� �Է� �ϼ��� : ";
	cin >> n;
	cout << n << "��" << endl;

	n1 = n / 10000;
	n = n % 10000;

	n2 = n / 5000;
	n = n % 5000;

	n3 = n / 1000;
	n = n % 1000;

	n4 = n / 500;
	n = n % 500;

	n5 = n / 100;
	n = n % 100;

	n6 = n / 10;
	n7 = n % 10;

	cout << "����¥�� : " << n1 << endl;
	cout << "��õ��¥�� : " << n2 << endl;
	cout << "õ��¥�� : " << n3 << endl;
	cout << "�����¥�� : " << n4 << endl;
	cout << "���¥�� : " << n5 << endl;
	cout << "�ʿ�¥�� : " << n6 << endl;
	cout << "�Ͽ�¥�� : " << n7 << endl;


}