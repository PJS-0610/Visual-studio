/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj02 / cel2far3.c
	�ݺ��� ���� ���� -> ȭ��
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	double celcius = 12.46;

	printf("  ����(C)   ȭ��(F)\n");
	printf("----------------------=\n");
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;

	return 0;
}
