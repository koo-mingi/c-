#include "1.h"


void main() {

	/*int kor, eng, tot, mok;
	double avg;
	cout << "국어 점수 : ";
	cin >> kor;
	cout << "영어 점수 : ";
	cin >> eng;
	tot = kor + eng;
	avg = tot/ 2.0;
	mok = avg / 10;

	switch (mok)
	{
	case 10:
		cout << "A++ 이야\n";
		break;
	case 9:
		cout << "A 이야 \n";
		break;
	case 8:
		cout << "B 이야 \n";
		break;
	case 7 :
		cout << "C 이야 \n";
		break;
	case 6 :
		cout << "D 이야 \n";
		break;
	case 5 :case 4:case 3:case 2:case 1:case 0:
		cout << "E 이야\n";
		break;
	default:
		cout << "F 이야 \n";
		break;
	}*/

	/*int a, b,result;
	char op;
	cout << "두 수를 입력하세요 : ";
	cin >> a >> b;
	cout << "연산자를 입력하세요(+,-,*,/,%)" << endl;
	cin >> op;

	switch (op) {
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	case '%':
		result = a % b;
		break;
	default:
		cout << "잘 못 입력했어요. 다시 입력하세요\n";
	}

	cout << a<<" "<< op<<" "<< b <<" = " << result<< " 입니다." << endl;*/

	//---------------------------------------------------------------------------------
	/* 윤년은 4로 나누어 떨어지고, 100으로 나누어 떨어지지 않거나 400으로 나누어 떨어지면 윤년 아니면 평년*/
	/*int year;

	cout << "년도를 입력하세요 : ";
	cin >> year;

	if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 ==0))) {
		cout << "윤년" << endl;
	}
	else {
		cout << "평년" << endl;
	}*/

	//----------------------------------------------------------------------------------
	/*int han;
	han = 1;
	while (han < 5) {
		cout << "Good" << endl;
		han++;
	}*/

	//----------------------------------------------------------------------------------

	/*int i, sum=0;
	i = 1;

	while (i <= 100) {
		sum += i;
		i++;
	}
	cout <<"while : 1 ~ 100까지 합계는 "<< sum << "이다.\n";*/

	//-----------------------------------------------------------------------------------

	/*int i, sum = 0;
	i = 1;

	do {
		sum += i;
		i++;
	} while (i <= 100);

	cout << "do - while : 1 ~ 100까지 합계는 " << sum << "이다.\n";*/

	/*int i, sum = 0;
	i = 1;
	for (; i <= 100; i++) {
		sum += i;
	}
	cout << "for : " << sum << endl;*/

	//---------------------------------------------------------------------

	/*int a, b;
	cout << "다중 for문\n";
	for (a = 1; a <= 2; a++) {
		for (b = 1; b <= 3; b++) {
			cout << "a = " << a << setw(5) << "b = " << b << endl;
		}
	}
		cout << "끝!!\n";*/

		//--------------------------------------------------------------------
		/*cout << "===구구단===\n";
		for (int a = 2; a < 10; a++)
			for (int b = 1; b < 10; b++)
				cout << a << " * " << b <<" = "<<a * b<<endl;*/

				//---------------------------------------------------------------------
				/*int num;
				cout << "원하는 단을 입력하세요 :";
				cin >> num;
				for (int i = 1; i < 10; i++)
					cout << num << " * " << i << " = " << num * i << endl;*/

					//---------------------------------------------------------------------

				//char mun;
				//while (1) {
				//	cout << "문자를 입력하세요 : ";
				//	cin >> mun;
				//	if (mun >= 'A'&&mun <= 'Z')//65~92
				//	{
				//		cout << "정상입력입니다." << endl;
				//		break;
				//	}
				//	else {
				//		cout << "잘 못 입력하셨습니다. 대문자를 입력하세요" << endl;
				//		continue; // 현재 루프의 끝으로 이동하는 기능.
				//	}

					//-----------------------------------------------------------------------
				//int n;
				//while(1){
				//	cout << "숫자를 입력하세요 : ";
				//	cin >> n;
				//
				//	if (n == EOF) { // -1
				//		cout << "종료됩니다." << endl;
				//		break;
				//	}
				//	else
				//		continue;

				//---------------------------------------------------------------------------------

					/*for (int i = 1; i < 10; i++) {
						for (int j = 2; j < 10; j++)
							cout <<setw(2)<< j<<" * " <<i<<" = " <<setw(-2)<< j * i<<"\t";
						cout << endl;
					}*/

					//----------------------------------------------------------------------------------
					//int i = 0, asum = 0, bsum = 0; //asum : 1부터 100까지 홀수, bsum : 1부터 100까지 짝수합
					//int sw = 0;
					//
					//while (i < 100) {
					//	i++;
					//	if (sw == 0) {
					//		asum = asum + i;
					//		sw = 1;
					//	}
					//	else {
					//		bsum = bsum + i;
					//		sw = 0;
					//	}
					//}
					//cout << " asum = " << asum << " bsum = " << bsum << endl;

					// 최대공약수, 최소공배수 구하기

					//------------------------------------------------------------------------------------

					//int m, n,u,v, GCM,LCM;
					//cout << "두 수를 입력하세요 : ";
					//cin >> m >> n;
					//u = m;
					//v = n;
					//while (m != n) {
					//	if (m > n) {
					//		m = m - n;
					//	}
					//	else {
					//		n = n - m;
					//	}
					//}
					//GCM = m;
					//LCM = (v * u) / GCM;
					//cout << "최대공약수는 " << GCM << endl;
					//cout << "최소공배수는 " << LCM << endl;

					//--------------------------------------------------------------------------------------

					//int m, n, u,v,GCM, LCM,na;
					//cout << "두 수를 입력하세요 : ";
					//cin >> m >> n;
					//
					//if (m > n) {
					//	u = m; //큰 수
					//	v = n; //작은 수
					//}
					//else {
					//	u = n;
					//	v = m;
					//}
					//while (u != 0) {
					//	na = v % u; // 작은 수 % 큰 수
					//	v = u;
					//	u = na;
					//
					//	GCM = u;
					//	LCM = (m * n) / GCM;
					//	cout << "최대공약수는 " << GCM << endl;
					//	cout << "최소공배수는 " << LCM << endl;
					//}

char ch;

cout << "한 문자를 입력하세요 : ";
cin >> ch;

while (1){ // 대문자를 입력했는지 판별하는 루프
	if (ch<'A' || ch>'Z') {
		cout << "대문자를 입력하세요 : ";
		cin >> ch;
	}
	else { // 대문자면 루프탈출
		break;
	}
}

for(int i = 0;i<26;i++){
	if (ch > 'Z') {
		ch = ch - 26;
	}
	cout << ch << " ";
	ch++;
}
}