#include <stdio.h>
#include "000000_IDSU_LIST_ADT_HEAD.h"

//배열을 기반으로 하는 LIST자료형

void ListInit(LIST* plist) {
	//초기화
	plist->curPosition = 0;
	plist->numOfData = 0;
	puts("초기화 완료");
}
void Linsert(LIST* plist, LDATA data) {
	if (plist->numOfData < LIST_LEN) {			//LIST_LEN이하일때만 저장한다.
		plist->arr[plist->numOfData] = data;	//데이터를 추가
		(*plist).numOfData++;					//저장 수 증가
		puts("저장 완료");
	}
	else
		printf("더 이상 저장 할 수 없습니다.\n");
}

int LFirst(LIST* plist, LDATA* pdata) {

}
int LNext(LIST* plist, LDATA* pdata) {

}

LDATA LRemove(LIST* plist) {

}
int LCount(LIST* plist) {
		printf("DATA 저장 수 : %d개\n", plist->numOfData);
}