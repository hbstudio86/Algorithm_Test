#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//Q1. 13.1�� ����� �������� ���� ���� ��ȯ�ض�
	char f_Name[40];	//���ϸ� ���� �迭
	int ch;
	FILE* fp;
	unsigned long count = 0;

	printf("�о�� ���ϸ��� �Է��ϼ���..");
	scanf("%s", f_Name);	// ���ϸ��� �Է� ����

	if ((fp = fopen(f_Name, "r")) == NULL) {	//���� ���� �Ǽ��� �ߴ�. null�϶� ����Ǿ�� �ϴµ�... �ƴҶ� �������� ��..
		printf("%s ������ �о� �� �� �����ϴ�.\n", f_Name);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(fp))!= EOF)
	{
		putc(ch, stdout);	//putchar(ch)�� ����.
		count++;
	}

	fclose(fp);
	printf("%s ���Ͽ��� %ld���� ���ڰ� ��� �ֽ��ϴ�.\n", f_Name, count);

	return 0;
}