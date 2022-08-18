//두 개 명령행 전달인자 사용
//첫 번째는 문자
//두 번째는 파일
//프로그램은 파일에서 첫 번째 문자가 있는 라인 들만 출력 해야 함
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	char str[257];	//파일에서 한 라인을 읽기 위해 사용하는 문자배열
	//char tmp[257];
	char idx_ch = argv[1][0];	//명령행의 문자를 읽어 옵니다.
	FILE* fp;

	printf("읽어온 문자는 %c 입니다.\n", idx_ch);

	fp = fopen(argv[2], "r");	//명령행 전달인자의 파일을 엽니다.

	if (fp == NULL) {
		puts("해당 파일이 없습니다..");
		exit(EXIT_FAILURE);
	}
	
	//while (fscanf(fp,"%s",tmp) != EOF) {
	//	//임시 문자열에 넣은다음..
	//	//그것을 str에 넣는다.
	//	//그리고 루프를 돌려 같은 문자가 있느지 비교후 
	//	//있다면 출력한다
	//	
	//}

	while (fgets(str, 256, fp) != NULL) {
		//printf("%s", str);
		int cnt = 0;
		while (str[cnt] != '\0' || 255 == cnt) {	//null 문자가 아닐때 까지 루프를 돌린다.
			if (str[cnt] == idx_ch) {
				printf("%s", str);
				break;
			}
			cnt++;
		}
	}
	//fgets는 eof를 만나면 NULL을 반환 한다.
	fclose(fp);

	return 0;
}