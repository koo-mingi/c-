#include <stdio.h> // c 표준입출력
#include <iostream> // c++ 표준입출력
#include <string> // 문자열
#include <sstream> // 문자열 스트림. 클래스형 객체를 만듬
#include <iomanip> // 입출력 기본 form
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
//	//c 출력
//	printf("*******************c 언어 출력 함수*********************\n");
//	printf("   name      kor  eng mat tot avg\n");
//	printf("%8s %4.0f %4.0f %3.0f %4.0f %4.1f\n",name,kor,eng,mat,tot,avg);
//	//자릿수 맞추기가 힘들다
//
//	//c++ 출력
//	cout << endl << "****************c++ 언어 출력 함수********************" << endl;
//	cout << "   name      kor  eng mat tot avg\n" << endl;
//	cout << setw(10) << name << setw(5) << kor << setw(5) << eng << setw(4) << mat 
//		 << setw(5) << tot << setw(5) << setprecision(3) << avg << endl;
//
//}

//void main() {
//	int number;
//	cout << "숫자 입력받기 : ";
//	cin >> number;
//	cout << "출력 : " << number << endl;
//
//	char dan[15];
//	cout << "문자 입력받기 : ";
//	cin >> dan;
//	cout << "출력 : " << dan << endl;
//	cout << "멈추려면 0을 누르세요!";
//	//0을 입력하면 화면에는 출력하지 않게 할 예정
//	_getch(); // conio.h를 include를 해야 사용가능
//			  // 화면에 출력하지 않고 입력을 받을 수가 있다.
//	cout << endl;
//}

//int main() {
//
//	int n;
//	stringstream  ss; //sstream 헤더가 끌고 오는 클래스. 객체를 만들어서 사용
//	ss.str("12 345 6789 0 -12");
//	// 공백을 기준으로 문자열을 나누어서 쓸 수가 있다.
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
//	cout << setiosflags(ios::left); // 이제부터 왼쪽정렬
//	cout << setw(10) << "753-0510" << "|"<<endl;
//	cout << 3.14 << endl;
//	cout << setprecision(6); //소수점까지 6자리
//	cout << setw(10) << setiosflags(ios::showpoint) // 비여있는 부분을 0으로 채워서 보여줌
//		 << 3.14 << endl;
//	cout << resetiosflags(ios::left); // 왼쪽정렬해제
//	cout << setw(10) << "World" << "|" << endl;
//
//	cout << setiosflags(ios::left) << setw(10) << "World" << "|" << endl;
//}

//void main() {
//	char Name[15];
//	char address[20];
//	cout << "이름을 입력하세요 : ";
//	//cin << name; // 스페이스(띄어쓰기)를 인식하지 못한다.
//					// 버퍼에는 '홍 길 동'. 모두다 들어 있지만, 메모리에는 띄어쓰기 전인 '홍'만 올라간다.
//	
//	cin.get(Name,15); // java의 nextLine()처럼 엔터를 버퍼에 남겨준다.
//	//cin.ignore();  // 버퍼에 남아있는 내용을 지워버림
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
//			cout << "이름을 입력하세요 : ";
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
//	s = ++h + ++h; // s = 7 + 7 = 14. h가 두 번 ++된 값인 7을 더하게 된다.
//				   // 연산 우선순위가 ++이 먼저인듯.
//	cout << "h = " << h << endl;
//	cout << "s = " << s << endl;
//}


// 관계연산자
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
	printf("두 값을 입력하세요 : ");
	scanf_s("%d%d", &a, &b);
	printf("a=%d b=%d\n", a, b);
	c = a > b;
	printf("c 결과 : %d\n", c);
	printf("a > b의 결과 : %d\n", a > b);
	a++;
	printf("a와 b가 같다 : %d\n", a == b);
	printf("a와 b가 같지 않다 : %d\n", a != b);*/

	int a = 3, b = 2, c;
	c = a == ++b;
	printf("c 결과  : %d\n", c);
	printf("결과 : %d\n", (a == b) && (--b == c)); // (a==b)=1,(--b==c)=0
	printf("결과 : %d\n", (a != b) || (b == c)); // a=3,b=2,c=1
												 // (a!=b)=1, (b==c)=0
	printf("결과 : %d\n", !(a != b) || (b == c));  //!(a!=b)=0, (b==c)=0
}

