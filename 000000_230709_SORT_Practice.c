#include <stdio.h>
#include <stdlib.h>

//±¸Á¶Ã¼
typedef struct _data {

	int number;

}DATA;

int compare(void*, void*);

int main() {

	DATA Datas[10];

	for (int i = 0; i < 10; i++) {
		Datas[i].number = i;
	}

	for (int i = 0; i < 10; i++) {
		
		printf("%d\n", Datas[i].number);
		//Datas[i].number = i;
	}

	qsort(Datas, 10, sizeof(DATA), compare);

	for (int i = 0; i < 10; i++) {

		printf("%d\n", Datas[i].number);
		//Datas[i].number = i;
	}

	return 0;
}

int compare(void* a, void* b) {
	DATA* DA = (DATA*)a;
	DATA* DB = (DATA*)b;
	if (DA->number > DB->number) {
		return -1;
	}
	else if (DA->number < DB->number) {
		return 1;
	}
	
	return 0;
}