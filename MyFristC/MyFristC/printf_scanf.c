#include <stdio.h>

int main(void)
{
	// ������ ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// �Ǽ��� ����
	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2f\n", d);*/

	// ����� ����, ������ �ʴ� ��, �빮�ڷ� ǥ��
	/*const int YEAR = 1993;   // const�� �������ν� ����� �ȴ�
	printf("�¾ �⵵ : %d\n", YEAR);*/

	// printf
	// ����
	/*int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);*/
	//printf("%d x %d = %d\n", 4, 7, 4 * 7); // �䷱ ������ ǥ���� ����

	// scanf
	// Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°��� %d\n", input);*/

	/*int one, two, three;
	printf("3���� ������ �Է��ض� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù ��° �� : %d\n", one);
	printf("�� ��° �� : %d\n", two);
	printf("�� ��° �� : %d\n", three);*/

	//����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	/*char c = 'A';  // ����
	printf("%c\n", c);*/
	char ss[10]; // ���ڿ��� �迭�� ����, 10-1 ��ŭ�� ���ڸ� ����
	scanf_s("%s", ss, sizeof(ss));
	printf("%s\n", ss);

	return 0;
}