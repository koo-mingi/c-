#include<iostream>
using namespace std;

void main() {

	int kor, eng, tot, mok;
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
	}

}