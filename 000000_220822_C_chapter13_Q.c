#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//Q1. 13.1을 명령행 전달인자 없는 모드로 전환해라
	char f_Name[40];	//파일명 저장 배열
	int ch;
	FILE* fp;
	unsigned long count = 0;

	printf("읽어올 파일명을 입력하세요..");
	scanf("%s", f_Name);	// 파일명을 입력 받음

	if ((fp = fopen(f_Name, "r")) == NULL) {	//어이 없는 실수를 했다. null일때 실행되어야 하는데... 아닐때 실행으로 함..
		printf("%s 파일을 읽어 올 수 없습니다.\n", f_Name);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(fp))!= EOF)
	{
		putc(ch, stdout);	//putchar(ch)와 같다.
		count++;
	}

	fclose(fp);
	printf("%s 파일에는 %ld개의 문자가 들어 있습니다.\n", f_Name, count);

	return 0;
}