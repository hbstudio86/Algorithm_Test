//명령행 전달인자를 사용하지 않거나 하나의 명령행 전달인자를 사용하는 프로그램 작성
//하나의 며령행 전달인자가 있다면 그것을 파일 이름으로 해석
//명령행 전달인자가 없다면 입력을 위해 표준입력을 사용
//입력이 완전히 부동소수점 수들로 이루어져 있다고 가정
//프로그램은 입력에 있는 부동 소수점 수들의 산술 평균을 계산하고 그결과를 보고해야 함

//바이너리로 읽을 것
//파일여부 확인 할것
//없다면 프로그램에서 입력을 받을 것

//명령행 전달인자
//0은 파일이름 문자열
//1은 추가
//명령 프롬프트에서 [파일이름 전달인자] 의 형식으로 사용하면 된다.
//전달 인자의 구분은 화이트스페이스로 구분된다.
#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * args[])	//문자열을 받을 것이니 2중포인터 사용할 것
{
	//for (int i = 0; i < argc; i++)
	//	printf("%s\n", args[i]);
	double sum = 0;	//총합을 위한 변수 선언
	if (argc == 1)	//명령행 전달인자가 추가적으로 없을 때
	{
		int cnt = 0;		//평균을 내기위한 변수
		double tmp = 0;	//임시 변수
		puts("파일명을 입력하지 않았습니다.");
		puts("수동으로 값을 입력하세요");
		puts("종료는 Q입니다.");
		while (fscanf(stdin,"%lf",&tmp))
		{
			//printf("%.2f", sum);
			sum += tmp;
			cnt++;
		}
		puts("종료");
		if (0 != cnt)	// 입력이되었다면..
			printf("입력 값의 평균 : %.2f\n", sum / (double)cnt);
		else
			puts("값을 입력하지 않았습니다.");
	}
	else if (argc > 1)
	{
		puts("파일을 읽어 옵니다.");
		printf("%s\n", args[1]);
		FILE* fp;	//파일을 열기위한 파일포인터
		double sum = 0.0, tmp;
		int cnt =0 ;
		fp = fopen(args[1], "rb");
		printf("%d\n", sizeof(fp));
		while (fread(&tmp,sizeof(double),1,fp) != EOF) {	//왜 0.00이 출력 되는 거야??
			printf("%.2f\n", tmp);
			sum += tmp;
			cnt++;
		}
		puts("종료");
		if (0 != cnt)	// 입력이되었다면..
			printf("입력 값의 평균 : %.2f\n", sum / (double)cnt);
		else
			puts("값을 입력하지 않았습니다.");
		/*if (fopen())*/
	}
	return 0;
}
