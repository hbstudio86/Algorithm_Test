#include <stdio.h>
#include "000000_IDSU_LIST_ADT_HEAD.h"

//�迭�� ������� �ϴ� LIST�ڷ���

void ListInit(LIST* plist) {
	//�ʱ�ȭ
	plist->curPosition = 0;
	plist->numOfData = 0;
	puts("�ʱ�ȭ �Ϸ�");
}
void Linsert(LIST* plist, LDATA data) {
	if (plist->numOfData < LIST_LEN) {			//LIST_LEN�����϶��� �����Ѵ�.
		plist->arr[plist->numOfData] = data;	//�����͸� �߰�
		(*plist).numOfData++;					//���� �� ����
		puts("���� �Ϸ�");
	}
	else
		printf("�� �̻� ���� �� �� �����ϴ�.\n");
}

int LFirst(LIST* plist, LDATA* pdata) {

}
int LNext(LIST* plist, LDATA* pdata) {

}

LDATA LRemove(LIST* plist) {

}
int LCount(LIST* plist) {
		printf("DATA ���� �� : %d��\n", plist->numOfData);
}