#include <stdio.h> // c ǥ�������
#include <iostream> // c++ ǥ�������
#include <string> // ���ڿ�
#include <sstream> // ���ڿ� ��Ʈ��. Ŭ������ ��ü�� ����
#include <iomanip> // ����� �⺻ form
#include <conio.h> 
using namespace std;

//void main()
//{
//	char name[] = "koo min gi";
//	float kor, eng, mat, tot;
//	double avg;
//	kor = 90;
//	eng = 85;
//	mat = 70;
//	tot = kor + eng + mat;
//	avg = tot / 3.0;
//
//	//c ���
//	printf("*******************c ��� ��� �Լ�*********************\n");
//	printf("   name      kor  eng mat tot avg\n");
//	printf("%8s %4.0f %4.0f %3.0f %4.0f %4.1f\n",name,kor,eng,mat,tot,avg);
//	//�ڸ��� ���߱Ⱑ �����
//
//	//c++ ���
//	cout << endl << "****************c++ ��� ��� �Լ�********************" << endl;
//	cout << "   name      kor  eng mat tot avg\n" << endl;
//	cout << setw(10) << name << setw(5) << kor << setw(5) << eng << setw(4) << mat 
//		 << setw(5) << tot << setw(5) << setprecision(3) << avg << endl;
//
//}

//void main() {
//	int number;
//	cout << "���� �Է¹ޱ� : ";
//	cin >> number;
//	cout << "��� : " << number << endl;
//
//	char dan[15];
//	cout << "���� �Է¹ޱ� : ";
//	cin >> dan;
//	cout << "��� : " << dan << endl;
//	cout << "���߷��� 0�� ��������!";
//	//0�� �Է��ϸ� ȭ�鿡�� ������� �ʰ� �� ����
//	_getch(); // conio.h�� include�� �ؾ� ��밡��
//			  // ȭ�鿡 ������� �ʰ� �Է��� ���� ���� �ִ�.
//	cout << endl;
//}

//int main() {
//
//	int n;
//	stringstream  ss; //sstream ����� ���� ���� Ŭ����. ��ü�� ���� ���
//	ss.str("12 345 6789 0 -12");
//	// ������ �������� ���ڿ��� ����� �� ���� �ִ�.
//	
//	for(int i=0;i<5;i++){
//		ss >> n;
//		cout << n << endl;
//	}
//	return 0;
//}

//void main()
//{
//	cout << setw(10) << "753-0510" << "|" << endl;
//	cout << setiosflags(ios::left); // �������� ��������
//	cout << setw(10) << "753-0510" << "|"<<endl;
//	cout << 3.14 << endl;
//	cout << setprecision(6); //�Ҽ������� 6�ڸ�
//	cout << setw(10) << setiosflags(ios::showpoint) // ���ִ� �κ��� 0���� ä���� ������
//		 << 3.14 << endl;
//	cout << resetiosflags(ios::left); // ������������
//	cout << setw(10) << "World" << "|" << endl;
//
//	cout << setiosflags(ios::left) << setw(10) << "World" << "|" << endl;
//}

//void main() {
//	char Name[15];
//	char address[20];
//	cout << "�̸��� �Է��ϼ��� : ";
//	//cin << name; // �����̽�(����)�� �ν����� ���Ѵ�.
//					// ���ۿ��� 'ȫ �� ��'. ��δ� ��� ������, �޸𸮿��� ���� ���� 'ȫ'�� �ö󰣴�.
//	
//	cin.get(Name,15); // java�� nextLine()ó�� ���͸� ���ۿ� �����ش�.
//	//cin.ignore();  // ���ۿ� �����ִ� ������ ��������
//	cout << "address :";
//	cin.get(address, 20);
//	//cin.ignore();
//	cout << "\nName : " << Name<<endl;
//	cout << "address : "<<address<<endl;
//
//}

//void main() {
//			char Name[15];
//			char address[20];
//			cout << "�̸��� �Է��ϼ��� : ";
//			cin.getline(Name,15); 
//			cout << "address :";
//			cin.getline(address, 20);
//			cout << "\nName : " << Name<<endl;
//			cout << "address : "<<address<<endl;
//}

//and : &&
//or : ||

//void main() {
//	int a = 10, b = 5, c, d, e;
//	printf("a=%d b=%d\n", a++, b);	 // a=10, b=5
//	printf("a=%d b=%d\n", a++, --b); // a=11, b=4
//	printf("a=%d b=%d\n", ++a, b);	 // a=13, b=4
//
//	c = a;
//	printf("c=%d\n", c); // c= 13, a = 13
//
//	d = c % b;
//	printf("d=%d\n", d); // 13 % 4 = 1
//}

//void main() {
//	int a, b, c, h, s;
//	a = b = h = 5;
//	c = ++a + b--; // c = 6 + 5 = 11
//	cout << "a = " << a << endl; // a = 6
//	cout << "b = " << b << endl; // b = 4
//	cout << "c = " << c << endl; // c = 11
//
//	s = ++h + ++h; // s = 7 + 7 = 14. h�� �� �� ++�� ���� 7�� ���ϰ� �ȴ�.
//				   // ���� �켱������ ++�� �����ε�.
//	cout << "h = " << h << endl;
//	cout << "s = " << s << endl;
//}


// ���迬����
void main() {
	/*int h, s;
	h = 3;
	s = h > 2;
	cout << s << endl;
	s = h < 2;
	cout << s << endl;
	s = 2 == 3;
	cout << s << endl;*/

	/*int h, s;
	h = 2 != 4 && 5 > 3;
	s = !1 || !0;
	cout << h << endl;
	cout << s << endl;*/

	/*int a, b, c;
	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d%d", &a, &b);
	printf("a=%d b=%d\n", a, b);
	c = a > b;
	printf("c ��� : %d\n", c);
	printf("a > b�� ��� : %d\n", a > b);
	a++;
	printf("a�� b�� ���� : %d\n", a == b);
	printf("a�� b�� ���� �ʴ� : %d\n", a != b);*/

	int a = 3, b = 2, c;
	c = a == ++b;
	printf("c ���  : %d\n", c);
	printf("��� : %d\n", (a == b) && (--b == c)); // (a==b)=1,(--b==c)=0
	printf("��� : %d\n", (a != b) || (b == c)); // a=3,b=2,c=1
												 // (a!=b)=1, (b==c)=0
	printf("��� : %d\n", !(a != b) || (b == c));  //!(a!=b)=0, (b==c)=0
}

