#include <stdint.h>
#include <stdio.h>
#include "000000_IDSU_LIST_ADT_HEAD.h"

int main() {
	
	ArrayList AL1;
	LDATA data;

	ListInit(&AL1);

	//내용을 추가 함
	for (int i = 30; i <= 50; i++) {

		Linsert(&AL1, i);
	}

	LCount(&AL1);

	//내용을 출력 함
	if (LFirst(&AL1, &data)) {
		printf("%d\n", data);
		while (LNext(&AL1, &data)) {
			printf("%d\n", data);
		}
	}
	puts("삭제 후");
	//내용을 삭제 함
	//35를 찾아서 삭제 하라
	if (LFirst(&AL1, &data)) {  // 배열에 값이 저장되어 있다면...
		if (35 == data) {	    // 첫번째값이 지정한 값인지 확인 하고
			LRemove(&AL1);		// 삭제 처리
		}
		else {					// 첫번째값이 아니면..
			while (LNext(&AL1, &data)) {	// 다음 배열의 값을 확인
				if (35 == data) {			// 지정한 값인지 확인 후
					LRemove(&AL1);			// 삭제 처리
				}
			}
		}
	}
	//49를 찾아서 삭제 하라
	if (LFirst(&AL1, &data)) { 
		if (49 == data) {
			LRemove(&AL1);
		}
		else {
			while (LNext(&AL1, &data)) {
				if (49 == data) {
					LRemove(&AL1);
				}
			}
		}
	}

	if (LFirst(&AL1, &data)) {
		printf("%d\n", data);
		while (LNext(&AL1, &data)) {
			printf("%d\n", data);
		}
	}

	LCount(&AL1);

	return 0;
}