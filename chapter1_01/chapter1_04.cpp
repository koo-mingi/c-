#include<iostream>
using namespace std;

void main() {
	//int a,b;
	//cout << "첫번째 숫자를 입력하세요 : ";
	//cin >> a;
	//cout << "두번째 숫자를 입력하세요 : ";
	//cin >> b;
	//cout << "a = " << a << endl << "b = " << b << endl;
	//cout << "두 숫자 중에서 더 큰 수는? "<<endl;
	//a > b ? cout << a << "이(가) 더 크다" << endl // 참인 경우
	//	  : cout << b << "이(가) 더 크다" << endl; // 거짓인 경우


	//int i, j, k, max, min;
	//cout << "숫자 3개를 입력하세요 : ";
	//cin >> i>> j>> k;

	//// 최대값
	///*(i > j) ? ((i > k) ? max = i : max = k)
	//	: ((j > k) ? max = j : max = k);*/

	//// 최대값 다른 방법
	//max = i;
	//max < j ? max = j : max;
	//max < k ? max = k : max;
	//cout << "max = " << max << endl;

	//// 최소값
	///*(i < j) ? ((i < k) ? min = i : (min = k))
	//	: ((j < k) ? min = j : min = k);*/

	//// 최소값 다른 방법
	//min = i;
	//min > j ? min = j : min;
	//min > k ? min = k : min;
	//cout << "min = " << min << endl;

	/*int n, n1, n2, n3, n4, n5;
	cout << "다섯자리 수를 입력 하세요 : ";
	cin >> n;
	cout << n << "은" << endl;
	n1 = n / 10000;
	n2 = (n % 10000) / 1000;
	n3 = (n % 1000) / 100;
	n4 = (n % 100) / 10;
	n5 = n % 10;
	cout << "만원짜리 : " << n1 << endl;
	cout << "천원짜리 : " << n2 << endl;
	cout << "백원짜리 : " << n3 << endl;
	cout << "십원짜리 : " << n4 << endl;
	cout << "일원짜리 : " << n5 << endl;*/

	int n, n1, n2, n3, n4, n5,n6,n7;
	cout << "다섯자리 수를 입력 하세요 : ";
	cin >> n;
	cout << n << "은" << endl;

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

	cout << "만원짜리 : " << n1 << endl;
	cout << "오천원짜리 : " << n2 << endl;
	cout << "천원짜리 : " << n3 << endl;
	cout << "오백원짜리 : " << n4 << endl;
	cout << "백원짜리 : " << n5 << endl;
	cout << "십원짜리 : " << n6 << endl;
	cout << "일원짜리 : " << n7 << endl;


}