#include <stdio.h>

// 정보처리기사 실기 대비

int main(void) {

	//Q1. 가로 세로~
	int arr1[5][5] = { 0, };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d,", arr1[i][j]);
		}
		printf("\n");
	}

	return 0;
}