#include "000000_NameCardList.h"
#include <stdio.h>

extern int _is_Initialize;	//extern static int ����?

// ����Ʈ �ʱ�ȭ
void ListInitial(LIST* plist) {
	plist->curPosition = -1;
	plist->numOfList = 0;
	_is_Initialize = 1;
	puts("LIST�� �ʱ�ȭ�� �Ϸ�Ǿ����ϴ�.");
}

// ����Ʈ �׸� �߰�
void ListInsert(LIST* plist, LDATA data) {
	if (0 == _is_Initialize) {	//�ʱ�ȭ�� �Ǿ� ���� �ʴٸ�..
		puts("�ʱ�ȭ�� �Ǿ� ���� �ʽ��ϴ�.");
		return;
	}
	else {
		plist->curPosition++;
		plist->arr[plist->numOfList] = data;
		plist->numOfList++;
		printf("%d���� �Է��Ͽ����ϴ�.\n", data);
	}
}

// ����Ʈ ī��Ʈ ���
int ListCount(LIST* plist) {
	printf("List Count = %d�� \n", plist->numOfList);
}

// ����Ʈ ù ���� �� Ȯ��
int ListFirst(LIST* plist, LDATA* data);

// ����Ʈ ���� �� Ȯ��
int ListNext(LIST* plist, LDATA* data);

// ����Ʈ ����
void ListRemove(LIST* plist);