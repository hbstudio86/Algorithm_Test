#pragma warning(disable:4996)
#include <stdio.h>

//8puzzle 문제
// 2 8 3  1 2 3
// 1 6 4  8 e 4
// 7 0 5  7 6 5

//상태 묘사
typedef struct _node {

	//puzzle[y][x]
	int puzzle[3][3];
	int empty_X;
	int empty_Y;

}NODE;


int main(void) {

	//initial status
	NODE node = { {{2,8,3},{1,6,4},{7,0,5}},2,1 };

	//Goal status
	NODE gnode = { {{1,2,3},{8,0,4},{7,6,5}},1,1 };




	return 0;
}