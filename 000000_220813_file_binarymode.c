#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* Fin, *Fout;	//���� �б�, ���� ���� ��Ʈ��
	int num1, num2, num3;	//block������ �ٲ㺼 ��. �迭�� �̿��ؼ�
	Fin = fopen("btest1.txt", "wb");	//���� ���� ���� ��Ʈ�� ����

	if (Fin == NULL) {
		puts("���Ͽ��⸦ �����Ͽ���");
		exit(EXIT_FAILURE);
	}
	puts("���� �� ���� �Է��ϼ���(����)");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	fwrite(&num1, sizeof(int), 1, Fin);
	fwrite(&num2, sizeof(int), 1, Fin);
	fwrite(&num3, sizeof(int), 1, Fin);
	fclose(Fin);

	Fout = fopen("btest1.txt", "rb");

	if (Fout == NULL) {
		puts("������ ���� ����");
		exit(EXIT_FAILURE);
	}
	printf("file size = %d\n", sizeof(*Fout));
	int tmp;
	//while ( fread(&tmp,sizeof(int),1,Fout) != eof) ���ѷ����� ������. ���ϳ��� ���̳ʸ� ��忡����
	                                                 //��� �б� �����̴�... å�� �� �־���...
	while ((tmp = getc(Fout)) != EOF) {	
		fprintf(stdout, "%d", tmp);		//	100020003000 ���·� ��� �ȴ�.
	}
	// 2�� ������ ��� eof�� ����?
	//int tmp[3];
	//fread(tmp, sizeof(int), 3, Fout);
	//fprintf(stdout, "%d\n%d\n%d\n", tmp[0], tmp[1], tmp[2]);	//���� ��ü�� �ҷ�����?

	fclose(Fout);

	return 0;
}