#include<iostream>
using namespace std;


void main() {
	
	//// 짝수
	//int a;
	//cout << "숫자를 입력하세요 : ";
	//cin >> a;

	//if (a % 2 == 0) cout << "짝수입니다.\n";
	//else cout << "홀수입니다.\n";


	//// 10의 배수
	//if (a % 10 == 0) cout << "10의 배수입니다.\n";
	//else cout << "10의 배수가 아니거든? 잘 좀 입력해줄래?\n\n";

	//// 10보다 큰 수
	//int b;
	//cout << "숫자를 입력하세요 : ";
	//cin >> b;
	//if (b > 10) cout << b << ": 10보다 큰 수 입니다.\n";
	//else cout << b << ": 10보다 작은 수 입니다.\n";

	//---------------------------------------------------------------

	/*int num1, num2;
	cout << "첫 번째 수를 입력하세요 : ";
	cin >> num1;
	cout << "두 번째 수를 입력하세요 : ";
	cin >> num2;
	
	cout << "\n--- 두 수의 비교 분석 결과 ---\n";
	
	if (num1 >= num2) {
		if (num1 == num2) {
			cout << num1 << "과 " << num2 << "은(는) 같은 수입니다.\n";
		}
		else 
			cout << num1 << "은 " << num2 << "보다 큰 수입니다.\n";
	}
	else {
		cout << num1 << "은 " << num2 << "보다 작은 수입니다.\n";
	}*/
	
	//---------------------------------------------------------------

	int num1,a,num2;
	cout << "분석할 숫자를 입력하세요 : ";
	cin >> num1;
	cout << "배수 숫자를 입력하세요 : ";
	cin >> num2;
	
	if (num1 % num2 == 0) {
		cout << num1 << "은 "<<num2<<"의 배수입니다.\n";
	}
	else
	{
		a = num2 - (num1 % num2);
		cout << num2<<"의 배수가 되기 위해서는 " << a << "가 필요합니다.\n";
		cout << num2 << "의 배수가 되기 위해서는 " << num1 % num2 << "만큼 버려야 합니다.\n";
	}

}