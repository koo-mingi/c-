#include<iostream>
using namespace std;


void main() {
	
	//// ¦��
	//int a;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> a;

	//if (a % 2 == 0) cout << "¦���Դϴ�.\n";
	//else cout << "Ȧ���Դϴ�.\n";


	//// 10�� ���
	//if (a % 10 == 0) cout << "10�� ����Դϴ�.\n";
	//else cout << "10�� ����� �ƴϰŵ�? �� �� �Է����ٷ�?\n\n";

	//// 10���� ū ��
	//int b;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> b;
	//if (b > 10) cout << b << ": 10���� ū �� �Դϴ�.\n";
	//else cout << b << ": 10���� ���� �� �Դϴ�.\n";

	//---------------------------------------------------------------

	/*int num1, num2;
	cout << "ù ��° ���� �Է��ϼ��� : ";
	cin >> num1;
	cout << "�� ��° ���� �Է��ϼ��� : ";
	cin >> num2;
	
	cout << "\n--- �� ���� �� �м� ��� ---\n";
	
	if (num1 >= num2) {
		if (num1 == num2) {
			cout << num1 << "�� " << num2 << "��(��) ���� ���Դϴ�.\n";
		}
		else 
			cout << num1 << "�� " << num2 << "���� ū ���Դϴ�.\n";
	}
	else {
		cout << num1 << "�� " << num2 << "���� ���� ���Դϴ�.\n";
	}*/
	
	//---------------------------------------------------------------

	/*int num1,a,num2;
	cout << "�м��� ���ڸ� �Է��ϼ��� : ";
	cin >> num1;
	cout << "��� ���ڸ� �Է��ϼ��� : ";
	cin >> num2;
	
	if (num1 % num2 == 0) {
		cout << num1 << "�� "<<num2<<"�� ����Դϴ�.\n";
	}
	else
	{
		a = num2 - (num1 % num2);
		cout << num2<<"�� ����� �Ǳ� ���ؼ��� " << a << "�� �ʿ��մϴ�.\n";
		cout << num2 << "�� ����� �Ǳ� ���ؼ��� " << num1 % num2 << "��ŭ ������ �մϴ�.\n";
	}*/

	//--------------------------------------------------------------------


	/*int num, num2, num3;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> num;
	num2 = 5 - (num % 5);
	num3 = num % 5;

	if (num % 5 == 0) {
		cout << "5�� ��� �Դϴ�";
	}
	else {
		cout << num << "��(��) 5�� ����� �Ƿ���" << num2 << " ��ŭ �ʿ�!!" << endl;
		cout << " �Ǵ� " << num3 << "��ŭ ������ �մϴ�!!" << endl;
	}*/

	//------------------------------------------------------------------------------


	//char ch;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> ch;
	//if (ch >= 'A' && ch <= 'Z') { // 65���� 94
	//	cout << "Upper case" << endl;
	//}
	//else if (ch >= 'a' && ch <= 'z') {
	//	cout << "Lower case" << endl;
	//}
	//else {
	//	cout << "No Good" << endl;
	//}

	int kor, eng, tot;
	double avg;
	cout << "���� ���� : ";
	cin >> kor;
	cout << "���� ���� : ";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;

	if (avg > 100) {
		cout << "�� �� �Է��� ��?";
	}
	else if ( avg >=90) {
		cout << "A ����̾�\n";
	}
	else if (avg >= 80) {
		cout << "B ����̾�\n";
	}
	else if (avg >= 70) {
		cout << "C ����̾�\n";
	}
	else if (avg >= 60) {
		cout << "D ����̾�\n";
	}
	else if(avg<0){
		cout << "������ ���� ��?\n";
	}
	else {
		cout << "E ����̾�\n";
	}


}