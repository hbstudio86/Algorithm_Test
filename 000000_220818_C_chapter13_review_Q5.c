//두 개 명령행 전달인자 사용
//첫 번째는 문자
//두 번째는 파일
//프로그램은 파일에서 첫 번째 문자가 있는 라인 들만 출력 해야 함

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	char str[257];	//파일에서 한 라인을 읽기 위해 사용하는 문자배열
	char idx_ch = argv[1][0];	//명령행의 문자를 읽어 옵니다.
	FILE* fp;

	printf("읽어온 문자는 %c 입니다.\n", idx_ch);

	return 0;
}