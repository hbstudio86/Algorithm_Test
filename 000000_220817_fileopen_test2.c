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
		printf("%d 번째 입력할 값을 Double 형태로 입력해 주세요...\n>>", i + 1);
		scanf("%lf", &d_Val[i]);
		fprintf(fp, "%f\n", d_Val[i]);
		printf("%.2f 값 파일로 입력됨	\n", d_Val[i]);
	}

	fclose(fp);

	puts("다른 파일 스트림으로 파일을 엽니다.");

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

	puts("종료");

	fclose(fp2);

	//파일로 프로그램값을 쓰기 위해서는 fprintf 함수로 출력을 해야 한다.
	//파일에서 프로그램 값을 읽기 위해서는 fscanf 함수로 입력 해야 한다.
	//fprintf 함수를 써서 텍스트 모드로 값을 써줄때는 \n이 중요한것 같다
	//해당 값을 쓰지 않고 한줄로 double 값을 출력하여 
	//다시 읽어 온 작업을 했는데, 값이 처음 입력한 값이 나왔다.
	//file read에서는 개행이나 화이트 스페이스를 무시한다고 기억하는데
	//이부분 때문에 그렇게 값을 읽는 것으로 추정 된다.

	return 0;
}