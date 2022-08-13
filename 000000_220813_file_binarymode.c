#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* Fin, *Fout;	//파일 읽기, 파일 쓰기 스트림
	int num1, num2, num3;	//block단위로 바꿔볼 것. 배열을 이용해서
	Fin = fopen("btest1.txt", "wb");	//쓰기 위해 파일 스트림 연결

	if (Fin == NULL) {
		puts("파일열기를 실패하였음");
		exit(EXIT_FAILURE);
	}
	puts("숫자 세 개를 입력하세요(정수)");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	fwrite(&num1, sizeof(int), 1, Fin);
	fwrite(&num2, sizeof(int), 1, Fin);
	fwrite(&num3, sizeof(int), 1, Fin);
	fclose(Fin);

	Fout = fopen("btest1.txt", "rb");

	if (Fout == NULL) {
		puts("파일을 열수 없음");
		exit(EXIT_FAILURE);
	}
	printf("file size = %d\n", sizeof(*Fout));
	int tmp;
	//while ( fread(&tmp,sizeof(int),1,Fout) != eof) 무한루프에 빠진다. 파일끝도 바이너리 모드에서는
	                                                 //모두 읽기 때문이다... 책에 다 있었네...
	while ((tmp = getc(Fout)) != EOF) {	
		fprintf(stdout, "%d", tmp);		//	100020003000 형태로 출력 된다.
	}
	// 2진 형태일 경우 eof가 없다?
	//int tmp[3];
	//fread(tmp, sizeof(int), 3, Fout);
	//fprintf(stdout, "%d\n%d\n%d\n", tmp[0], tmp[1], tmp[2]);	//차라리 전체를 불러오라?

	fclose(Fout);

	return 0;
}