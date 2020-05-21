#include "1.h"

//int a;
//
//void add(int i) {
//	if (i >= 10) {
//		return; // 호출된 곳으로 돌아감.
//	}
//		i++;
//		a++;
//		cout << a << endl;
//		add(i); // 재귀 호출
//	
//}
//
//int main() {
//	add(0);
//	cout << "메인 결과값 : " << a << endl;
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
//		//countNum(num--); : num--로 하면 감소되지 않은 상태로 함수에 들어가기 때문에 무한 루프 걸림
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

// 팩토리얼 구하기. 재귀함수
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
	long long f = 1; // 자연수 n에 대한 factorial값을 저장.
	long long s = 1; // 자연수의 누승의 합을 보관.
	long long result; // 결과값 받기.
	cout << "숫자를 입력하세요 : ";
	cin >> num;

	result = factorial(n,f,s);
	cout << "총 합 : " << result;
	return 0;
}