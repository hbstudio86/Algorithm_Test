#include <stdint.h>
#include <stdio.h>
#include "000000_IDSU_LIST_ADT_HEAD.h"

int main() {
	
	ArrayList AL1;
	LDATA data;

	ListInit(&AL1);
	Linsert(&AL1, 30); Linsert(&AL1, 31); Linsert(&AL1, 32); Linsert(&AL1, 33);
	LCount(&AL1);

	if (LFirst(&AL1, &data)) {
		printf("%d\n", data);
		while (LNext(&AL1, &data)) {
			printf("%d\n", data);
		}
	}


	return 0;
}