#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

#define DEFAULTSIZE 3				//하노이타워 원반의 기본 갯수
static int _iCrops = DEFAULTSIZE;	//언제든지 바꿀 수 있게 전역변수에 static으로 선언 해준다.

//하노이타워
//타워의 높이를 입력 받는다
//진행되는 step을 하나씩 출력 한다.
//원반의 크기를 숫자로 표시한다.
//기본 디폴트 크기는 3 >> 선택을 안했을 시
//setting

void _fSetting(void);

int main() {

	_fSetting();
	printf("%d", _iCrops);

	return 0;
}

void _fSetting(void) {

	printf("==================[SETTING]================\n");
	printf("1. Input Tower height (default:%d):__\b\b",_iCrops);
	scanf("%d", &_iCrops);
	getchar();

}