#include<iostream>
using namespace std;

void main() {

	int kor, eng, tot, mok;
	double avg;
	cout << "���� ���� : ";
	cin >> kor;
	cout << "���� ���� : ";
	cin >> eng;
	tot = kor + eng;
	avg = tot/ 2.0;
	mok = avg / 10;

	switch (mok)
	{
	case 10:
		cout << "A++ �̾�\n";
		break;
	case 9:
		cout << "A �̾� \n";
		break;
	case 8:
		cout << "B �̾� \n";
		break;
	case 7 :
		cout << "C �̾� \n";
		break;
	case 6 :
		cout << "D �̾� \n";
		break;
	case 5 :case 4:case 3:case 2:case 1:case 0:
		cout << "E �̾�\n";
		break;
	default:
		cout << "F �̾� \n";
		break;
	}

}