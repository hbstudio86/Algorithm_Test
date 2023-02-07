#include <stdio.h>
#include "000000_NameCard.h"
#include "000000_NameCardList.h"

int main(void) {

	LIST list1;
	int data = 30;

	ListInitial(&list1);
	ListInsert(&list1, data);


	return 0;
}