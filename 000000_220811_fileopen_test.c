#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//char* fName = "double.txt";
	FILE* fp;
	fp = fopen("double.txt", "rb");
	int ch;
	double tmp;

	if (fp == NULL) {
		puts("������ ���� �����ϴ�.");
		return 0;
	}
	else
		puts("���� ���� ����");

	//while ((ch = getc(fp)) != EOF)
	//{
	//	putchar(ch);
	//}

	int outV = fread(&tmp, sizeof(double), 1, fp);

	printf("%d", outV);

	fclose(fp);

	return 0;
}