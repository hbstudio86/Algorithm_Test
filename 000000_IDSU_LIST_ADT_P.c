#include <stdio.h>
#include "000000_IDSU_LIST_ADT_HEAD.h"

//�迭�� ������� �ϴ� LIST�ڷ���

void ListInit(LIST* plist) {
	//�ʱ�ȭ
	plist->curPosition = -1;
	plist->numOfData = 0;
	puts("�ʱ�ȭ �Ϸ�");
}
void Linsert(LIST* plist, LDATA * data) {
	if (plist->numOfData < LIST_LEN) {			//LIST_LEN�����϶��� �����Ѵ�.
		plist->arr[plist->numOfData] = data;	//�����͸� �߰�
		(*plist).numOfData++;					//���� �� ����
		puts("���� �Ϸ�");
	}
	else
		printf("�� �̻� ���� �� �� �����ϴ�.\n");
}

int LFirst(LIST* plist, LDATA* pdata) {	//data ��ȸ	
	if (plist->numOfData == 0) {	//���� ������ �ȵ� �ڷ� �������?
		return FALSE;				//False�� �����Ѵ�.
	}
	//�ƴ϶�� ù��° data�� ��ȸ�Ͽ� ���� �����Ѵ�.
	plist->curPosition = 0;						//0���� �ʱ�ȭ�� Ȯ�� �ϴٸ� �� �̰��� ���� �ʿ�� ���� ���δ�.
	*pdata = plist->arr[plist->curPosition];	//ó�� �ε��� ���� �ִ´�.
	return TRUE;
}
int LNext(LIST* plist, LDATA* pdata) {
	if (plist->curPosition > plist->numOfData - 1) {
		return FALSE;
	}
	plist->curPosition++;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

LDATA LRemove(LIST* plist) {	//���� 
	//���� �� �ε����� ���� �ε����� ���� ����.
	//���� �� �ε����� ���� ���� �ε��� ������ ���� ����.
}
int LCount(LIST* plist) {
		printf("DATA ���� �� : %d��\n", plist->numOfData);
}