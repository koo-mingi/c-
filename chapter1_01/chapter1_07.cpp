#include "1.h"

int max(int a, int b);

/* c++은 순차적인 언어라서, 위에서 사용자 정의 함수를 선언해주지 않으면,
	main에서 함수를 부르지 못한다.
	이러한 함수형태를 <프로토 타입>이라고 한다.
*/

//void main() {
//	int m, n, res;
//	cout << "비교할 두 수를 입력하세요 : ";
//	cin >> m >> n;
//	res = max(m, n);
//	cout << "MAX : " << res<<endl;
//}
//
//int max(int a, int b) {
//
//	if (a > b) return a;
//	else return b;
//}

// Call by value

//void value(int a, int b) {
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//void main() {
//	int n1, n2;
//	n1 = 10;
//	n2 = 20;
//
//	value(n1, n2);
//	cout << "n1 = " << n1 << endl;
//	cout << "n2 = " << n2 << endl;
//}

// Call by reference

//void value(int *a, int *b) {
//	int temp;
//
//	temp = *a;
//	*a = *b;
//	*b = temp;
//	cout << "a의 주소 = " << a << endl;
//	cout << "b의 주소 = " << b << endl;
//	cout << "a의 값 = " << *a << endl;
//	cout << "b의 값 = " << *b << endl;
//}
//
//void main() {
//	int n1, n2;
//	n1 = 10;
//	n2 = 20;
//	cout << "n1의 주소 = " << &n1 << endl;
//	cout << "n2의 주소= " << &n2 << endl;
//	cout << "n1 = " << n1 << endl;
//	cout << "n2 = " << n2 << endl;
//	cout << endl;
//	value(&n1, &n2);
//	cout << endl;
//	cout << "n1의 주소 = " << &n1 << endl;
//	cout << "n2의 주소= " << &n2 << endl;
//	cout << "n1 = " << n1 << endl;
//	cout << "n2 = " << n2 << endl;
//}

// call back
// 실인수, 가인수, return 값이 모두 없는 경우
//char mun, alp;
//void dae() {
//	mun = mun - 32;
//	cout << mun << endl;
//}
//
//void main() {
//	cout << "알파벳을 입력하세요 : ";
//	cin >> mun;
//
//	dae();
//}

//char mun, alp;
//void dae(char alp) {
//	alp= alp - 32;
//	cout << alp << endl;
//}
//
//void main() {
//	cout << "알파벳을 입력하세요 : ";
//	cin >> mun;
//
//	dae(mun);
//}

//==============================================================================
// 실인수, 가인수는 없고 return값만 있는 경우
//
//char mun, alp;
//char dae() {
//	mun = mun - 32;
//	return mun;
//}
//
//void main() {
//	cout << "알파벳을 입력하세요 : ";
//	cin >> mun;
//
//	alp=dae();
//	cout << alp << endl;
//}

// 실인수, 가인수, return값 있는 경우
char mun, alp,res;
char dae(char alp) {
	alp = alp - 32;
	return alp;
}

void main() {
	cout << "알파벳을 입력하세요 : ";
	cin >> mun;

	res = dae(mun);
	cout << res << endl;
}