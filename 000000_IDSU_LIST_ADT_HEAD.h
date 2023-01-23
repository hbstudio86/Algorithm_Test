#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define FALSE 0
#define TRUE 1

#define LIST_LEN 100

typedef int LDATA;

typedef struct __ArrayList {
	LDATA arr[LIST_LEN];
	int numOfData;
	int curPosition;
}ArrayList;

typedef ArrayList LIST;

void ListInit(LIST* plist);
void Linsert(LIST* plist, LDATA data);

int LFirst(LIST* plist, LDATA* pdata);
int LNext(LIST * plist, LDATA* pdata);

LDATA LRemove(LIST* plist);
int LCount(LIST* plist);


#endif // !__ARRAY_LIST_H__



