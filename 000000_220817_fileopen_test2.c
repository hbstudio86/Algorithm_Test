#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* fp;
	double d_Val[5];
	fp = fopen("testfile.txt", "w");

	if (!fp) {
		puts("Fail open fail!!");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ��° �Է��� ���� Double ���·� �Է��� �ּ���...\n>>", i + 1);
		scanf("%lf", &d_Val[i]);
		fprintf(fp, "%f\n", d_Val[i]);
		printf("%.2f �� ���Ϸ� �Էµ�	\n", d_Val[i]);
	}

	fclose(fp);

	puts("�ٸ� ���� ��Ʈ������ ������ ���ϴ�.");

	FILE* fp2;
	double tmp = 0.0, sum = 0.0;
	//int ck;
	fp2 = fopen("testfile.txt", "r");

	if (!fp2) {
		puts("File open Faile!!");
		exit(EXIT_FAILURE);
	}

	while (fscanf(fp,"%lf",&tmp) != EOF) {
		sum += tmp;
	}

	fprintf(stdout, "%.2f", sum);

	puts("����");

	fclose(fp2);

	//���Ϸ� ���α׷����� ���� ���ؼ��� fprintf �Լ��� ����� �ؾ� �Ѵ�.
	//���Ͽ��� ���α׷� ���� �б� ���ؼ��� fscanf �Լ��� �Է� �ؾ� �Ѵ�.
	//fprintf �Լ��� �Ἥ �ؽ�Ʈ ���� ���� ���ٶ��� \n�� �߿��Ѱ� ����
	//�ش� ���� ���� �ʰ� ���ٷ� double ���� ����Ͽ� 
	//�ٽ� �о� �� �۾��� �ߴµ�, ���� ó�� �Է��� ���� ���Դ�.
	//file read������ �����̳� ȭ��Ʈ �����̽��� �����Ѵٰ� ����ϴµ�
	//�̺κ� ������ �׷��� ���� �д� ������ ���� �ȴ�.

	return 0;
}