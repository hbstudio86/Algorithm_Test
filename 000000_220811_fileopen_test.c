#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//char* fName = "double.txt";
	FILE* fp;	//��Ʈ���� �ٷ�� ���� ���� ������
	fp = fopen("double.txt", "r");	//������ ���� �� ����� fp�� ���� / �ؽ�Ʈ����
	int ch;		//���ڿ� �� ���ڸ� �ٷ�� ���� �̰ɷ� ����
	double tmp;

	if (fp == NULL) {
		puts("������ ���� �����ϴ�.");
		return 0;
	}
	else
		puts("���� ���� ����");

	//fscanf(fp, "%lf", &tmp);	//fscanf�� ���ؿ��� �Ϲ����� ���ڷο��� �ֱ���...
	//printf("%.2f\n", tmp);
	while ((ch = fscanf(fp,"%lf",&tmp)) != EOF)	//���� ���� ��� eof(-1)�� ch�� ���� �Ѵ�.
	{
		printf("%.3f\n", tmp);
	}
	//int outV = fread(&tmp, sizeof(double), 1, fp);	//1�� ���ϵȴ�
	
	fclose(fp);
	fp = fopen("test.txt", "wb");	//���̳ʸ�����
	if (fp == NULL) {
		puts("���� ���� ����");
		return 0;
	}
	else
		puts("���� ���� ����");
	double test = 11.1;
	fwrite(&test, sizeof(double), 1, fp);
	fclose(fp);
	fp = fopen("test.txt", "rb");	//���̳ʸ�����
	if (fp == NULL) {
		puts("���� ���� ����");
		return 0;
	}
	else
		puts("���� ���� ����");
	double test2;
	fread(&test2, sizeof(double), 1, fp);
	fprintf(stdout, "%.2f", test2);
	fclose(fp);
	return 0;
}