//�� �� ����� �������� ���
//ù ��°�� ����
//�� ��°�� ����
//���α׷��� ���Ͽ��� ù ��° ���ڰ� �ִ� ���� �鸸 ��� �ؾ� ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	char str[257];	//���Ͽ��� �� ������ �б� ���� ����ϴ� ���ڹ迭
	//char tmp[257];
	char idx_ch = argv[1][0];	//������� ���ڸ� �о� �ɴϴ�.
	FILE* fp;

	printf("�о�� ���ڴ� %c �Դϴ�.\n", idx_ch);

	fp = fopen(argv[2], "r");	//����� ���������� ������ ���ϴ�.

	if (fp == NULL) {
		puts("�ش� ������ �����ϴ�..");
		exit(EXIT_FAILURE);
	}
	
	//while (fscanf(fp,"%s",tmp) != EOF) {
	//	//�ӽ� ���ڿ��� ��������..
	//	//�װ��� str�� �ִ´�.
	//	//�׸��� ������ ���� ���� ���ڰ� �ִ��� ���� 
	//	//�ִٸ� ����Ѵ�
	//	
	//}

	while (fgets(str, 256, fp) != NULL) {
		//printf("%s", str);
		int cnt = 0;
		while (str[cnt] != '\0' || 255 == cnt) {	//null ���ڰ� �ƴҶ� ���� ������ ������.
			if (str[cnt] == idx_ch) {
				printf("%s", str);
				break;
			}
			cnt++;
		}
	}
	//fgets�� eof�� ������ NULL�� ��ȯ �Ѵ�.
	fclose(fp);

	return 0;
}