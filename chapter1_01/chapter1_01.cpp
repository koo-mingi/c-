// chapter1_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h> /*C 기본 입출력 헤더파일*/

//void main() {
//	char M, N;
//	M = 'B';
//	N = 'e';
//	printf("%c\n", M);
//	printf("%c\n", N);
//}

//void main() {
//	// 순차적 컴파일
//	char H, S;
//	H = 65;
//	S = 97;
//	printf("%c\n", H);
//	printf("%c\n", S);
//	H = 'z';
//	S = 'Z';
//	printf("%c\n", H);
//	printf("%c\n", S);
//}

void main() {
	/*float S, W;
	S = 32.4;
	W = 213748565.5;
	printf("%f\n%f\n", S, W);*/

	//float circum, area;
	//const float PI = 3.141592; // 상수값 : 나중에 포인터를 사용했을 때, 메모리에 미리 올리지 않으면 에러가 발생한다.
	//float radius = 25;
	//area = PI*radius*radius;
	//circum = 2 * PI *radius;
	//printf("Area of circle is %f\n", area);
	//printf("Circum of circle is %f\n", circum);

	//int i, j;
	//float k;
	//char ch;
	//i = 100;
	//j = 200;
	//k = 12.345;
	//ch = 'A';
	//printf("%d, %d\n", i, i + j);
	//printf("%f\n",k);
	//printf("%c %d\n", ch,ch);

	/*char k, b, s;
	k = 'k';
	b = 66;
	s = 's';
	printf("k, b, s\n%d, %d, %d", k, b, s);*/

	/*float pi;
	pi = 3.141592;
	printf("%15f\n", pi);
	printf("%-15f\n", pi);
	printf("%15.3f\n", pi);*/

	//char ch = 'A';
	//int i = 123456789;
	//printf("character = %c, ASCLL = %d\n", ch,ch);
	//printf("\n");
	//printf("%12d\n", i);
	//printf("%-3d%-3d%-3d\n", 12,34,56);
	//printf("%3d%3d%\n", 12, 34);
	//printf("%03d%3d\n", 3, 160);
	//printf("the   ""end   \n");

	// const와 일반 변수의 차이 
	// 일반 변수는 값이 할당될 때마다 메모리 주소가 매번 바뀌지만,
	// const는 메모리 주소값이 유지, 고정된다.

	/*scanf_s : double(%lf), float(%f),int(%d),문자열(%s)*/
	//int java, c, tot;
	//printf("JAVA 점수를 입력 : ");
	//scanf_s("%d", &java); // 표준 입력 &: 메모리에 접근
	//printf("JAVA의 점수 : %d\n", java);
	//printf("C 점수를 입력 : ");
	//scanf_s("%d", &c);
	//printf("C의 점수 : %d\n", c);
	//tot = java + c;
	//printf("tot는 : %d", tot);

	/*int width, height;
	printf("사각형의 가로, 세로 길이를 입력하세요 :");
	scanf_s("%d%d", &width, &height);
	printf("사각형 넓이 = %d\n", width*height);
	printf("====================\n");


	char name[10];
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name,sizeof(name));
	printf("이름은 %s", name);*/

		
	/*int width, height;
	printf("밑변을 입력 하시오 : ");
	scanf_s("%d", &width);
	printf("높이를 입력 하시오 : ");
	scanf_s("%d", &height);
	
	float area = width* height / 2;
	printf("삼각형의 넓이는 %.2f\n", width*height/2.0);
	printf("삼각형의 넓이는 %.2f\n", area);
	printf("삼각형의 둘레는 %d\n", 3*width);*/

	/*float width, height;
	printf("밑변을 입력 하시오 : ");
	scanf_s("%f", &width);
	printf("높이를 입력 하시오 : ");
	scanf_s("%f", &height);

	float area = width * height / 2; //일반 삼각형
	area = (sqrt(3) / 4)* width*width; // 정삼각형
	printf("삼각형의 넓이는 %.2f\n", width*height / 2.0);
	printf("삼각형의 넓이는 %.2f\n", area);
	printf("삼각형의 둘레는 %f\n", 3 * width);*/

	


}
