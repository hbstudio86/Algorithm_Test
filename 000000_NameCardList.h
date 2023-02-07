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

// 리스트 초기화
void ListInitial(LIST* plist);

// 리스트 항목 추가
void ListInsert(LIST* plist, LDATA data);

// 리스트 카운트 출력
int ListCount(LIST* plist);

// 리스트 첫 번재 값 확인
int ListFirst(LIST* plist, LDATA* data);

// 리스트 다음 값 확인
int ListNext(LIST* plist, LDATA* data);

// 리스트 삭제
void ListRemove(LIST* plist);
