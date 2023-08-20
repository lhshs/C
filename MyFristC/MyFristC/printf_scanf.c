#include <stdio.h>

int main(void)
{
	// 정수형 변수
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// 실수형 변수
	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2f\n", d);*/

	// 상수형 변수, 변하지 않는 값, 대문자로 표현
	/*const int YEAR = 1993;   // const를 붙임으로써 상수가 된다
	printf("태어난 년도 : %d\n", YEAR);*/

	// printf
	// 연산
	/*int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);*/
	//printf("%d x %d = %d\n", 4, 7, 4 * 7); // 요런 식으로 표현도 가능

	// scanf
	// 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값은 %d\n", input);*/

	/*int one, two, three;
	printf("3개의 정수를 입력해라 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);*/

	//문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';  // 문자
	printf("%c\n", c);*/
	char ss[10]; // 문자열은 배열로 정의, 10-1 만큼의 글자만 받음
	scanf_s("%s", ss, sizeof(ss));
	printf("%s\n", ss);

	return 0;
}