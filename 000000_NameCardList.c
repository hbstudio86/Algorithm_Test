#include "000000_NameCardList.h"
#include <stdio.h>

extern int _is_Initialize;	//extern static int 였나?

// 리스트 초기화
void ListInitial(LIST* plist) {
	plist->curPosition = -1;
	plist->numOfList = 0;
	_is_Initialize = 1;
	puts("LIST의 초기화가 완료되었습니다.");
}

// 리스트 항목 추가
void ListInsert(LIST* plist, LDATA data) {
	if (0 == _is_Initialize) {	//초기화가 되어 있지 않다면..
		puts("초기화가 되어 있지 않습니다.");
		return;
	}
	else {
		plist->curPosition++;
		plist->arr[plist->numOfList] = data;
		plist->numOfList++;
		printf("%d값을 입력하였습니다.\n", data);
	}
}

// 리스트 카운트 출력
int ListCount(LIST* plist) {
	printf("List Count = %d개 \n", plist->numOfList);
}

// 리스트 첫 번재 값 확인
int ListFirst(LIST* plist, LDATA* data);

// 리스트 다음 값 확인
int ListNext(LIST* plist, LDATA* data);

// 리스트 삭제
void ListRemove(LIST* plist);