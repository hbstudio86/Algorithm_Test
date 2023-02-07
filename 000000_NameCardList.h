#pragma once
#include "000000_NameCard.h"

#define ARRAY_LEN 10
#define FALSE 0
#define TRUE 1
static int _is_Initialize = 0;

typedef int LDATA;

typedef struct __List {
	NameCard* arr[ARRAY_LEN];
	int curPosition;
	int numOfList;
}LIST;

// ����Ʈ �ʱ�ȭ
void ListInitial(LIST* plist);

// ����Ʈ �׸� �߰�
void ListInsert(LIST* plist, LDATA data);

// ����Ʈ ī��Ʈ ���
int ListCount(LIST* plist);

// ����Ʈ ù ���� �� Ȯ��
int ListFirst(LIST* plist, LDATA* data);

// ����Ʈ ���� �� Ȯ��
int ListNext(LIST* plist, LDATA* data);

// ����Ʈ ����
void ListRemove(LIST* plist);
