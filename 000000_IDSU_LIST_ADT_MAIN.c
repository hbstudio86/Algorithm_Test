#include <stdint.h>
#include <stdio.h>
#include "000000_IDSU_LIST_ADT_HEAD.h"

int main() {
	
	ArrayList AL1;
	LDATA data;

	ListInit(&AL1);

	//������ �߰� ��
	for (int i = 30; i <= 50; i++) {

		Linsert(&AL1, i);
	}

	LCount(&AL1);

	//������ ��� ��
	if (LFirst(&AL1, &data)) {
		printf("%d\n", data);
		while (LNext(&AL1, &data)) {
			printf("%d\n", data);
		}
	}
	puts("���� ��");
	//������ ���� ��
	//35�� ã�Ƽ� ���� �϶�
	if (LFirst(&AL1, &data)) {  // �迭�� ���� ����Ǿ� �ִٸ�...
		if (35 == data) {	    // ù��°���� ������ ������ Ȯ�� �ϰ�
			LRemove(&AL1);		// ���� ó��
		}
		else {					// ù��°���� �ƴϸ�..
			while (LNext(&AL1, &data)) {	// ���� �迭�� ���� Ȯ��
				if (35 == data) {			// ������ ������ Ȯ�� ��
					LRemove(&AL1);			// ���� ó��
				}
			}
		}
	}
	//49�� ã�Ƽ� ���� �϶�
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