#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//char* fName = "double.txt";
	FILE* fp;
	fp = fopen("double.txt", "r");
	int ch;
	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}
	fclose(fp);

	return 0;
}