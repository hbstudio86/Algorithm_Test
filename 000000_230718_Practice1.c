#include <stdio.h>

// ����ó����� �Ǳ� ���

int main(void) {

	//Q1. ���� ����~
	int arr1[5][5] = { 0, };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d,", arr1[i][j]);
		}
		printf("\n");
	}

	return 0;
}