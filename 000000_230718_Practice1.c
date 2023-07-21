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

	int ix, iy, rev;
	ix = iy = 5;
	rev = 1;	// 1 순방향, -1 역방향	
	do {

		for (int i = 0; i < ix; i++) {

		}	// hori
		
		for (int i = 0; i < ix - 1; i++) {

		} // verti



	} while (1);

	return 0;
}