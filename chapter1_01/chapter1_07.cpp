#include "1.h"

int max(int a, int b);

/* c++은 순차적인 언어라서, 위에서 사용자 정의 함수를 선언해주지 않으면,
	main에서 함수를 부르지 못한다.
	이러한 함수형태를 <프로토 타입>이라고 한다.
*/

void main() {
	int m, n, res;
	cout << "비교할 두 수를 입력하세요 : ";
	cin >> m >> n;
	res = max(m, n);
	cout << "MAX : " << res<<endl;
}

int max(int a, int b) {

	if (a > b) return a;
	else return b;
}
