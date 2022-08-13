#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//char* fName = "double.txt";
	FILE* fp;	//스트림을 다루기 위한 파일 포인터
	fp = fopen("double.txt", "r");	//파일을 열어 그 결과를 fp에 리턴 / 텍스트형식
	int ch;		//문자열 및 숫자를 다루기 위해 이걸로 연다
	double tmp;

	if (fp == NULL) {
		puts("파일을 열수 없습니다.");
		return 0;
	}
	else
		puts("파일 열기 성공");

	//fscanf(fp, "%lf", &tmp);	//fscanf를 통해열면 일반적인 숫자로열수 있구나...
	//printf("%.2f\n", tmp);
	while ((ch = fscanf(fp,"%lf",&tmp)) != EOF)	//파일 끝일 경우 eof(-1)을 ch에 대인 한다.
	{
		printf("%.3f\n", tmp);
	}
	//int outV = fread(&tmp, sizeof(double), 1, fp);	//1이 리턴된다
	
	fclose(fp);
	fp = fopen("test.txt", "wb");	//바이너리쓰기
	if (fp == NULL) {
		puts("파일 열기 실패");
		return 0;
	}
	else
		puts("파일 열기 성공");
	double test = 11.1;
	fwrite(&test, sizeof(double), 1, fp);
	fclose(fp);
	fp = fopen("test.txt", "rb");	//바이너리쓰기
	if (fp == NULL) {
		puts("파일 열기 실패");
		return 0;
	}
	else
		puts("파일 열기 성공");
	double test2;
	fread(&test2, sizeof(double), 1, fp);
	fprintf(stdout, "%.2f", test2);
	fclose(fp);
	return 0;
}